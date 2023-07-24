#include<stdio.h>
#include<math.h>
voide calculateprice(float value);
int main() {
float value = 100.0;
calculateprice(value);
printf("value is : %f \n", value);


int n = 4;
printf("%f", pow(n, 2));

return 0;

}

void calculateprice(float value){
value = value + (0.18 * value);
printf("final price is : %f\n", value);
}                                         