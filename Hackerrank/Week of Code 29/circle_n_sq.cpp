//TODO := Math still to be worked out

#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int area_of_triangle(int x1,int y1,int x2,int y2,int x3,int y3){

      //for simplicity purposes i wont consider the 1/2 factor
      int A = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
      return A;

}

int square_region(int x,int y,int x1,int y1,int x3,int y3){

      int x2 = (x1 + x3 + y3 - y1)/2;
      int y2 = (y1 + y3 + x1 - x3)/2;
      int x4 = (x1 + x3 + y1 - y3)/2;
      int y4 = (y1 + y3 + x3 - x1)/2;

      int f1  = area_of_triangle(x,y,x1,y1,x2,y2);
      int f2  = area_of_triangle(x,y,x2,y2,x3,y3);
      int f3  = area_of_triangle(x,y,x3,y3,x4,y4);
      int f4  = area_of_triangle(x,y,x4,y4,x1,y1);

      if((f1 >= 0 && f2 >= 0 && f3 >= 0 && f4 >= 0) || (f1 < 0 && f2 < 0 && f3 < 0 && f4 < 0)){
                  return 1;
      }
      else{
                  return 0;
      }



}



int circle_region(int x,int y,int xc,int yc,int r){

      int d = ((x - xc)*(x - xc)) + ((y - yc)*(y - yc));

      if(d <= (r*r)){
            return 1;
      }
      return 0;

}


int main( ){

    int h,w,r,xc,yc,x1,y1,x3,y3;
    cin>>w>>h;
    cin>>xc>>yc>>r;
    cin>>x1>>y1>>x3>>y3;

    for(int y = 0;y < h;y++){
                 for(int x = 0;x < w;x++){
                              int check_circle = circle_region(x,y,xc,yc,r);
                              int check_square = square_region(x,y,x1,y1,x3,y3);
                              if(check_circle == 1 || check_square == 1){
                                      cout<<"#";
                              }
                              else{
                                      cout<<".";
                              }
                 }
                 cout<<endl;
    }


    return 0;
}
