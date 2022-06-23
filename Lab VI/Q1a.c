#include <stdio.h>

int main() {
    
    int i, j;
    int isReflexive  =1 , isSym = 1, isTrans = 1, isAntiSymm = 1;
    int graph[4][4] = {{1, 1, 1, 1},
                       {0, 0, 0, 1},
                       {1, 1, 0, 0},
                       {0, 1, 1, 1}};
    
    for(i = 0; i < 4; i++) {
        if(graph[i][i] != 0 && isReflexive != 0) {
            isReflexive = 1;
        } else {
            isReflexive = 0;
        }
        
        for(j = 0; j < 4; j++) {
            
            /*Checks for symmetric and asymmtric*/
            if(isSym != 0) {
                if(graph[i][j] && graph[j][i]) {
                    isSym = 1;
                } else if((!graph[i][j] && graph[j][i]) || (graph[i][j] && !graph[j][i])) {
                    isSym = 0;
                }
            }
            
            /*Checks for antiSymmetric*/
            
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
    
    
    return 0;
}