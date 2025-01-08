#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aaaaaaaa, _aaaaaaa2, _bbbbbbbb, _xxxxxxxx, _ccccccc1, _ccccccc2;
   printf("Enter _aaaaaaaa:");
   scanf("%d", &_aaaaaaaa);
   printf("Enter _bbbbbbbb:");
   scanf("%d", &_bbbbbbbb);
   for (int _aaaaaaa2 = _aaaaaaaa; _aaaaaaa2 <= _bbbbbbbb; _aaaaaaa2++)
   printf("%d\n", _aaaaaaa2 * _aaaaaaa2);
   for (int _aaaaaaa2 = _bbbbbbbb; _aaaaaaa2 <= _aaaaaaaa; _aaaaaaa2++)
   printf("%d\n", _aaaaaaa2 * _aaaaaaa2);
   _xxxxxxxx = 0;
   _ccccccc1 = 0;
   while (_ccccccc1 < _aaaaaaaa)
   {
   {
   _ccccccc2 = 0;
   while (_ccccccc2 < _bbbbbbbb)
   {
   {
   _xxxxxxxx = _xxxxxxxx + 1;
   _ccccccc2 = _ccccccc2 + 1;
   }
   }
   _ccccccc1 = _ccccccc1 + 1;
   }
   }
   printf("%d\n", _xxxxxxxx);
   _xxxxxxxx = 0;
   _ccccccc1 = 1;
   do
   {
   _ccccccc2 = 1;
   do
   {
   _xxxxxxxx = _xxxxxxxx + 1;
   _ccccccc2 = _ccccccc2 + 1;
   }
   while (!(_ccccccc2 > _bbbbbbbb));
   _ccccccc1 = _ccccccc1 + 1;
   }
   while (!(_ccccccc1 > _aaaaaaaa));
   printf("%d\n", _xxxxxxxx);
   system("pause");
    return 0;
}
