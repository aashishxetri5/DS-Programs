#include <stdio.h>

int main() {

    /**
     * ~p -> ~q => If you are a hound dog, then you howl at the moon.
     * q: You don't howl at the moon.
     * p: Therefore, you aren't a hound dog.
     */

    int p = 0, q = 0, i;

    for (i = 0; i < 4; i++) {
        if(p && !q) {
            printf("%d\n", 0);
        } else {
            printf("%d\n", 1);
        }

        if((i+1)%2 == 0) p = !p;

        q = !q;
    }

    return 0;
}