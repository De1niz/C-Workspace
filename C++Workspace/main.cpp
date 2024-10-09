//
//  main.cpp
//  C++Workspace
//
//  Created by Denız on 10.10.2024.
//

#include <iostream>
 
void checktriangle(int a, int b, int c) {
    if (a+b>c && a+c>b && b+c>a){
    printf("that lines can form triangle \n");
}
else {
    printf("that lines can't form triangle \n");
}
}
 
int main()
{
  checktriangle(10, 10, 10);
  checktriangle(30, 10, 10);
  checktriangle(50, 10, 10);
    return 0;
}
