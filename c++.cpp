#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Circle{

private:
double r;
public:
    Circle () {
    }
Circle (double ra){
if(r<=0){
        throw "Neg ili 0";
}
r = ra;
}

void kons2 (double ra){
if(r<=0){
        throw "Neg ili 0";
}
r = ra;
}

double rade (){
return r;
}

double povrat (){
    double O;
    O=2*4*atan(1)*r;


 return O;

}
double povrat1 (){
  double P;
  P=4*atan(1)*(r*r);

  return P;
}

void skaliranje (double s){

if(s<=0){
    throw "Nula i neg";
}
r=r*s;
}

void ispis (){
cout<<povrat1()<<povrat()<<r<<endl;
}

};

class Cylinder{
private:
    double h;
    Circle krug;
public:
Cylinder(double re,double ha){
if(re<=0 || ha<=0) throw "ne";

h=ha;
krug.kons2(re);

}

void nova(double re,double ha){
  if(re<=0 || ha<=0) throw "ne";

h=ha;
krug.kons2(re);

}
double radiuss(){
    double radsson;
    radsson=krug.rade();
    return radsson;
    //ILI return krug.rade();
}
double visina(){
return h;
}

Circle baza() {
return krug;
}

double cilindar(){
double cilo;
cilo=(krug.povrat1()*krug.povrat1())+(krug.povrat()*h);
return cilo;
}
double volt(){
double voli;
voli=krug.povrat1()*h;
return voli;
}
void burch(double z,double x){
h=h*x;
krug.kons2(z*krug.rade());
//krug.kons2(z*krug.rade()); JE ISTO STO I r = r * z;

}

void disp (){
cout<<h<<krug.rade()<<volt()<<cilindar()<<krug.povrat()<<krug.povrat1()<<endl;
}

};

int main() {

Circle zaza(5);
Cylinder zaza4(7,8);
zaza4.disp();
zaza.ispis();

return 0;
}
