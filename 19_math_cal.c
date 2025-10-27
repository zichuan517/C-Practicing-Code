#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846   // π
#define M_E  2.71828182845904523536   // e
int main()
{
    printf("9的平方根为：%.0f\n",sqrt(9));
    printf("9的三次方为：%.0f\n",pow(9,3));

    int a = -1;
    int b = -2;
    int c = 3;
    double delta = b*b-4*a*c;
    double x1 = (-b+sqrt(delta))/(2*a);
    double x2 = (-b-sqrt(delta))/(2*a);
    printf("%.0f,%.0f\n",x1,x2);
    
    printf("%.7f\n",M_PI);
    printf("%.5f\n",M_E);

    int m=3;
    printf("%d\n",(m += m -= m * m));
    return 0;
}


/*
one interesting way to cite pi as π：
double pi = 4.0 * atan(1.0);

1. 幂函数和根号函数
double pow(double x, double y);     // x的y次幂
double sqrt(double x);              // 平方根
double cbrt(double x);              // 立方根（C99）
double hypot(double x, double y);   // 计算直角三角形的斜边长度

2. 指数和对数函数
double exp(double x);               // e的x次幂
double exp2(double x);              // 2的x次幂（C99）
double log(double x);               // 自然对数 ln(x)
double log10(double x);             // 常用对数 log₁₀(x)
double log2(double x);              // 以2为底的对数（C99）

3. 三角函数（参数为弧度）
double sin(double x);               // 正弦
double cos(double x);               // 余弦
double tan(double x);               // 正切
double asin(double x);              // 反正弦
double acos(double x);              // 反余弦
double atan(double x);              // 反正切
double atan2(double y, double x);   // 计算y/x的反正切（考虑象限）

4. 双曲函数
double sinh(double x);              // 双曲正弦
double cosh(double x);              // 双曲余弦
double tanh(double x);              // 双曲正切

5. 取整和绝对值函数
double ceil(double x);              // 向上取整
double floor(double x);             // 向下取整
double round(double x);             // 四舍五入
double trunc(double x);             // 向零取整
double fabs(double x);              // 浮点数绝对值
double fmod(double x, double y);    // 浮点数取余

6. 其他函数
double fmax(double x, double y);    // 返回较大值
double fmin(double x, double y);    // 返回较小值
double copysign(double x, double y); // 用y的符号返回x的值
*/


