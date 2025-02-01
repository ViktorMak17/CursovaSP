#include <stdio.h>
#include <stdlib.h>

int main() 
{
int _aaaaaaa;
printf("Enter _aaaaaaa: ");
scanf("%d", &_aaaaaaa);
while((_aaaaaaa > 1)) {
_aaaaaaa = (_aaaaaaa - 1);
if (((_aaaaaaa % 2) == 0)) {
continue;
}
printf("%d\n", _aaaaaaa);
}
   system("pause");
    return 0;
}
