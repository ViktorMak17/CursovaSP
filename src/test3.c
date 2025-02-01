#include <stdio.h>
#include <stdlib.h>

int main() 
{
int _jjjjjjj;
int _iiiiiii;
int _xxxxxxx;
int _bbbbbbb;
int _aaaaaaa;
printf("Enter _aaaaaaa: ");
scanf("%d", &_aaaaaaa);
printf("Enter _bbbbbbb: ");
scanf("%d", &_bbbbbbb);
for(
_xxxxxxx = _aaaaaaa;
_xxxxxxx <= _bbbbbbb;
++_xxxxxxx
) {
printf("%d\n", (_xxxxxxx * _xxxxxxx));

}_xxxxxxx = 0;
for(
_iiiiiii = 1;
_iiiiiii <= _aaaaaaa;
++_iiiiiii
) {
for(
_jjjjjjj = 1;
_jjjjjjj <= _bbbbbbb;
++_jjjjjjj
) {
_xxxxxxx = (_xxxxxxx + 1);

}
}printf("%d\n", _xxxxxxx);
   system("pause");
    return 0;
}
