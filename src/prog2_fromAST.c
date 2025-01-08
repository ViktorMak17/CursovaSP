#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aaaaaaaa;
   int _bbbbbbbb;
   int _cccccccc;
   printf("Enter _aaaaaaaa:");
   scanf("%d", &_aaaaaaaa);
   printf("Enter _bbbbbbbb:");
   scanf("%d", &_bbbbbbbb);
   printf("Enter _cccccccc:");
   scanf("%d", &_cccccccc);
   if (_aaaaaaaa > _bbbbbbbb) 
   {
   if (_aaaaaaaa > _cccccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _cccccccc);
   goto OutofIF;
Abigger:
   printf("%d\n", _aaaaaaaa);
   goto OutofIF;
   }
   }
   if (_bbbbbbbb < _cccccccc) 
   {
   printf("%d\n", _cccccccc);
   }
   else
   {
   printf("%d\n", _bbbbbbbb);
   }
OutofIF:
   if (((_aaaaaaaa == _bbbbbbbb && _aaaaaaaa == _cccccccc) && _bbbbbbbb == _cccccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aaaaaaaa < 0 || _bbbbbbbb < 0) || _cccccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_aaaaaaaa < (_bbbbbbbb + _cccccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
