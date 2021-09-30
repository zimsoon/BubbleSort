#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int tab [8] = {7,2,36,14,98,6,18,1};
   cout <<"Lista ...\n";
   for(i = 0; i<10; i++) {
      cout <<tab[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(tab[j] < tab[i]) {
         temp = tab[i];
         tab[i] = tab[j];
         tab[j] = temp;
      }
   }
pass++;
}
cout <<"Posortowana lista: ";
for(i = 0; i<10; i++) {
   cout <<tab[i]<<"\t";
}
cout<<"\n Liczba prób, wykonanych w celu posortowania liczb:"<<pass<<endl;
return 0;
}
