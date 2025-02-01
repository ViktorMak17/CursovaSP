#include <stdio.h>
#include <stdlib.h>

int main() 
{
int _ccccccc;
int _ccccccb;
int _cccccca;
int _rrrrrrr;
int _ddddddd;
int _vvvvvvv;
printf("Enter _vvvvvvv: ");
scanf("%d", &_vvvvvvv);
_vvvvvvv = (_vvvvvvv + 1);
for(
_cccccca = 0;
_cccccca <= 32767;
++_cccccca
) {
_ddddddd = (_vvvvvvv - 1);
for(
_ccccccb = 0;
_ccccccb <= 32767;
++_ccccccb
) {
if (((_ddddddd > 2) || (_ddddddd == 2))) { }
else {
goto _ggggggb;
}
_rrrrrrr = _vvvvvvv;
for(
_ccccccc = 0;
_ccccccc <= 32767;
++_ccccccc
) {
if (((_rrrrrrr > _ddddddd) || (_rrrrrrr == _ddddddd))) { }
else {
goto _ggggggc;
}
_rrrrrrr = (_rrrrrrr - _ddddddd);

}_ggggggc:
if ((_rrrrrrr == 0)) {
goto _ggggggb;
}
_ddddddd = (_ddddddd - 1);

}_ggggggb:
if ((_ddddddd == 1)) {
goto _gggggga;
}
_vvvvvvv = (_vvvvvvv + 1);

}_gggggga:
printf("%d\n", _vvvvvvv);
   system("pause");
    return 0;
}
