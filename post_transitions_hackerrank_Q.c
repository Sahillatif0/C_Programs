#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;



void print_all_packages(town t) {
    printf("%s:\n", t.name);
    for(int i=0;i<t.offices_count;i++){
        printf("\t%d:\n", i);
        for(int j=0; j<t.offices[i].packages_count;j++){
            printf("\t\t%s\n", t.offices[i].packages[j].id);
        }
    }
}

void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index) {	
    print_all_packages((*source));
    print_all_packages((*target));
    post_office* sOffice =  &((*source).offices[source_office_index]);
    post_office* tOffice =  &((*target).offices[target_office_index]);
    for(int i=0;i<sOffice->packages_count;i++){
        if(sOffice->packages[i].weight>=tOffice->min_weight && sOffice->packages[i].weight<=tOffice->max_weight){
            tOffice->packages_count++;
            tOffice->packages = realloc(tOffice->packages, sizeof(package) * tOffice->packages_count);
            tOffice->packages[(tOffice->packages_count)-1] = sOffice->packages[i];
            for(int j = i;j<sOffice->packages_count-1;j++){
                sOffice->packages[j] = sOffice->packages[j+1];
            }
            sOffice->packages_count--;     
            i--;       
        }
    }
    print_all_packages((*source));
    print_all_packages((*target));
}

town town_with_most_packages(town* towns, int towns_count) {
    town* ntown = &towns[0];
        int max_pkgs=0;
    for(int i=0;i<towns_count;i++){
        int pkgcnt=0;
        for(int j=0; j<towns[i].offices_count;j++){
            pkgcnt+=towns[i].offices[j].packages_count;
            printf("PKG Count = %d, MAX PKG = %d, town = %s\n", pkgcnt, max_pkgs, towns[i].name);
        }
        printf("after loop PKG Count = %d, MAX PKG = %d, town = %s\n", pkgcnt, max_pkgs, towns[i].name);
        if(pkgcnt>max_pkgs){
            max_pkgs = pkgcnt;
            ntown = &towns[i];
        }
    }
    return *ntown;
}

town* find_town(town* towns, int towns_count, char* name) {
    town* ntown = NULL;
    for(int i=0;i<towns_count;i++){
        if(!(strcmp((towns[i].name), name))){
            ntown = &towns[i];
        }
    }
    return ntown;
}

int main()
{
	int towns_count;
    printf("Enter the towns count: ");
	scanf("%d", &towns_count);
	town* towns = malloc(sizeof(town)*towns_count);
	for (int i = 0; i < towns_count; i++) {
		towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
        printf("Enter the town name: ");
		scanf("%s", towns[i].name);
        printf("Enter the offices count: ");
		scanf("%d", &towns[i].offices_count);
		towns[i].offices = malloc(sizeof(post_office)*towns[i].offices_count);
		for (int j = 0; j < towns[i].offices_count; j++) {
            printf("Enter the packagess count, min, max weight: ");
			scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
			towns[i].offices[j].packages = malloc(sizeof(package)*towns[i].offices[j].packages_count);
			for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
				towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
                printf("Enter the package id: ");
				scanf("%s", towns[i].offices[j].packages[k].id);
                printf("Enter the package weight: ");
				scanf("%d", &towns[i].offices[j].packages[k].weight);
			}
		}
	}
	int queries;
    printf("Enter the queries count: ");
	scanf("%d", &queries);
	char town_name[MAX_STRING_LENGTH];
	while (queries--) {
        printf("queries: %d",queries);
		int type;
        printf("Enter query type: ");
		scanf("%d", &type);
		switch (type) {
		case 1:
            printf("Enter the town name: ");
			scanf("%s", town_name);
			town* t = find_town(towns, towns_count, town_name);
			print_all_packages(*t);
			break;
		case 2:
            printf("Enter the source town name: ");
			scanf("%s", town_name);
			town* source = find_town(towns, towns_count, town_name);
			int source_index;
            printf("Enter the source office index: ");
			scanf("%d", &source_index);
            printf("Enter the target town name: ");
			scanf("%s", town_name);
			town* target = find_town(towns, towns_count, town_name);
			int target_index;
            printf("Enter the target office index: ");
			scanf("%d", &target_index);
			send_all_acceptable_packages(source, source_index, target, target_index);
			break;
		case 3:
			printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
			break;
		}
	}
	return 0;
}