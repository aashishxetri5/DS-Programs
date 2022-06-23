#include <stdio.h>

int main() {
    
    int i, j;
    int isReflexive  =1 , isSym = 1, isTrans = 1, isAntiSymm = 1;
    int graph[5][5] = {{0, 1, 0, 1, 0},
                       {1, 0, 1, 1, 1},
                       {0, 1, 1, 0, 0},
                       {1, 0, 0, 0, 1},
                       {0, 0, 1, 0, 1}};
    
    for(i = 0; i < 5; i++) {
        if(graph[i][i] != 0 && isReflexive != 0) {
            isReflexive = 1;
        } else {
            isReflexive = 0;
        }
        
        for(j = 0; j < 5; j++) {
            
            /*Checks for symmetric and asymmtric*/
            if(isSym != 0) {
                if(graph[i][j] == 1 && graph[j][i] == 1) {
                    isSym = 1;
                } else if((!graph[i][j] && graph[j][i]) || (graph[i][j] && !graph[j][i])) {
                    isSym = 0;
                }
            }
            
            /*Checks for antiSymmetric*/
            if(graph[i][j] == graph[j][i] && graph[i][j] != 0 && i != j){
                isAntiSymm = 1;
                break;
            }
        }
    }
    
    if(isReflexive == 0) {
        printf("This graph is not reflexive.\n");
    } else {
        printf("This graph is reflexive.\n");
    }
    
    if(isSym == 0) {
        printf("This graph is Asymmetric.\n");
    } else {
        printf("This graph is Symmetrix.\n");
    }
    
    if(isAntiSymm == 0) {
        printf("This graph is Anti symmetric.\n");
    } else {
        printf("This graph is not Anti symmetrix.\n");
    }
    
    
    return 0;
}