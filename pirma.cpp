#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
 int main()
 {
   string veik1, veik2, veik3, v1Winner, v2Winner, v3Winner;
   int v1r1, v1r2, v1r3, v2r1, v2r2, v2r3,v3r1, v3r2, v3r3, g1, g2, g3;
   ifstream in("duomenys.txt");
   ofstream out("rez5.txt");

   //---------------Skaitom-------------------
     in>>veik1>>v1r1>>v1r2>>v1r3;
     in>>veik2>>v2r1>>v2r2>>v2r3;
     in>>veik3>>v3r1>>v3r2>>v3r3;
   //-----------------------------------------
   //------------greiciausias laikas----------
   g1=min(v1r1, min(v2r1, v3r1));
   g2=min(v1r2, min(v2r2, v3r2));
   g3=min(v1r3, min(v2r3, v3r3));
   //-----------------------------------------
   //-----------greiciausias veikejas---------
   if (g1==v1r1){v1Winner = veik1;}
      else if (g1==v2r1){v1Winner = veik2;}
           else {v1Winner = veik3;}

   if (g2==v1r2){v2Winner = veik1;}
      else if (g2==v2r2){v2Winner = veik2;}
           else {v2Winner = veik3;}

    if (g3==v1r3){v3Winner = veik1;}
      else if (g3==v2r3){v3Winner = veik2;}
           else {v3Winner = veik3;}
   //----------------------------------------
   //----------------Isvedimas---------------
     out<<v1Winner<<endl;
     out<<v2Winner<<endl;
     out<<v3Winner<<endl;
   //----------------------------------------

   in.close();
   out.close();
   return 0;
 }
