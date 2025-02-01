#include <stdio.h>
#include <stdlib.h>

int main() 
{
int _ccccccc;
int _bbbbbbb;
int _aaaaaaa;
printf("Enter _aaaaaaa: ");
scanf("%d", &_aaaaaaa);
printf("Enter _bbbbbbb: ");
scanf("%d", &_bbbbbbb);
printf("Enter _ccccccc: ");
scanf("%d", &_ccccccc);
if ((_aaaaaaa < _bbbbbbb)) {
if ((_aaaaaaa < _ccccccc)) {
printf("%d\n", _aaaaaaa);
}
else {
printf("%d\n", _ccccccc);
}
}
else {
if ((_bbbbbbb < _ccccccc)) {
printf("%d\n", _bbbbbbb);
}
else {
printf("%d\n", _ccccccc);
}
}
if (((_aaaaaaa == _bbbbbbb) && ((_aaaaaaa == _ccccccc) && (_aaaaaaa == _ccccccc)))) {
printf("%d\n", 1);
}
else {
printf("%d\n", 0);
}
if (((_aaaaaaa > 0) || ((_bbbbbbb > 0) || (_ccccccc > 0)))) {
printf("%d\n", -1);
}
else {
printf("%d\n", 0);
}
if (!((_aaaaaaa > (_bbbbbbb + _ccccccc)))) {
printf("%d\n", 10);
}
else {
printf("%d\n", 0);
}
   system("pause");
    return 0;
}
