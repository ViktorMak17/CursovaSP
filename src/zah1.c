#include <stdio.h>
#include <stdlib.h>

int main() 
{
int _ccccccc;
int _rrrrrrr;
int _vvvvvvv;
printf("Enter _vvvvvvv: ");
scanf("%d", &_vvvvvvv);
_rrrrrrr = 1;
for(
_ccccccc = 0;
_ccccccc <= 32767;
++_ccccccc
) {
if ((_vvvvvvv != 0)) { }
else {
goto _endcycl;
}
_rrrrrrr = (_rrrrrrr * _vvvvvvv);
_vvvvvvv = (_vvvvvvv - 1);

}_endcycl:
printf("%d\n", _rrrrrrr);
   system("pause");
    return 0;
}
