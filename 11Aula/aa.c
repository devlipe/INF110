   #include <stdio.h>

   int main(){
   
      int ch;
   
         printf( "Entre com uma letra: " );
         ch = getchar();
         if( ch < 'A' || ch > 'z' )
            printf( "Voce nao teclou uma letra!" );
         else
            printf( "Voce teclou %c, e seu codigo ASCII eh %d.\n", ch, ch );
            return 0;
   }