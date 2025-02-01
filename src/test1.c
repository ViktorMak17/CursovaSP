#include <stdio.h>
#include <stdlib.h>

int main() 
{
int _yyyyyyy;
int _xxxxxxx;
int _bbbbbbb;
int _aaaaaaa;
printf("Enter _aaaaaaa: ");
scanf("%d", &_aaaaaaa);
printf("Enter _bbbbbbb: ");
scanf("%d", &_bbbbbbb);
printf("%d\n", (_aaaaaaa + _bbbbbbb));
printf("%d\n", (_aaaaaaa - _bbbbbbb));
printf("%d\n", (_aaaaaaa * _bbbbbbb));
printf("%d\n", (_aaaaaaa / _bbbbbbb));
printf("%d\n", (_aaaaaaa % _bbbbbbb));
_xxxxxxx = (((_aaaaaaa - _bbbbbbb) * 10) + ((_aaaaaaa + _bbbbbbb) / 10));
_yyyyyyy = (_xxxxxxx + (_xxxxxxx % 10));
printf("%d\n", _xxxxxxx);
printf("%d\n", _yyyyyyy);
   system("pause");
    return 0;
}
