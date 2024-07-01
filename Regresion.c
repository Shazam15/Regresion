#include <stdio.h>
#include <math.h>


//
//
//
//CALCULOS DE X
//
//
//

//------Suma de X------
double sumX(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = x[i] + resultado;
    }
    return resultado;
}

//------Suma de X^2------
double sumXSqr(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(x[i], 2) + resultado;
    }
    return resultado;
}

//------Suma de ln(x)------
double sumLnX(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = log(x[i]) + resultado;
    }
    return resultado;
}

//------Suma de ln(x)^2------
double sumLnXSqr(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(log(x[i]), 2) + resultado;
    }
    return resultado;
}

//------Suma de log(x)------
double sumLogX(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = log10(x[i]) + resultado;
    }
    return resultado;
}

//------Suma de log(x)------
double sumLogXSqr(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(log10(x[i]), 2) + resultado;
    }
    return resultado;
}

//------Suma de X^3------
double sumXCube(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(x[i], 3) + resultado;
    }
    return resultado;
}

//------Suma de X^4------
double sumXCuarta(int n, double x[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(x[i], 4) + resultado;
    }
    return resultado;
}

//
//
//
//CALCULOS DE Y
//
//
//

//------Suma de Y------
double sumY(int n, double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = y[i] + resultado;
    }
    return resultado;
}
//------Suma de Y^2------
double sumYSqr(int n, double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(y[i], 2) + resultado;
    }
    return resultado;
}

//------Suma de ln(y)------
double sumLnY(int n, double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = log(y[i]) + resultado;
    }
    return resultado;
}

//------Suma de ln(y)^2------
double sumLnYSqr(int n, double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(log(y[i]), 2) + resultado;
    }
    return resultado;
}

//------Suma de log(y)------
double sumLogY(int n, double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = log10(y[i]) + resultado;
    }
    return resultado;
}

//------Suma de log(y)^2
double sumLogYSqr(int n, double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = pow(log10(y[i]), 2) + resultado;
    }
    return resultado;
}

//
//
//
//CALCULOS DE X Y
//
//
//

//------Suma de x*y------
double sumXY(int n, double x[], double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = (x[i] * y[i]) + resultado;
    }
    return resultado;
}

//------Suma de x^2*y------
double sumX2Y(int n, double x[], double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = (pow(x[i], 2) * y[i]) + resultado;
    }
    return resultado;
}

//------Suma de x'*y------
double sumlnXY(int n, double x[], double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = (log(x[i]) * y[i]) + resultado;
    }
    return resultado;
}

//------Suma de x*y'------
double sumXlnY(int n, double x[], double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = (x[i] * log(y[i])) + resultado;
    }
    return resultado;
}

//------Suma de x'*y'------
double sumlnXlnY(int n, double x[], double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = (log(x[i]) * log(y[i])) + resultado;
    }
    return resultado;
}

//------Suma de log(x)*log(y)------
double sumLogXLogY(int n, double x[], double y[]){
    double resultado = 0.0;
    for(int i = 0; i < n; i++){
        resultado = (log10(x[i]) * log10(y[i])) + resultado;
    }
    return resultado;
}

//
//
//
//CALCULOS DE A, B Y R
//
//
//

//Calculos de B
double calcularB(int n, double sX, double sX2, double sY, double sXY){
    double numerador = (n * sXY) - (sX * sY);
    double denominador = (n * sX2) - (pow(sX, 2));
    return numerador/denominador;
}

//Calculos para A
double calcularA(int n, double sX, double sY,double b){
    double numerador = sY - (b * sX);
    return numerador/n;
}

//Calculos para R
double calcularR(int n, double sX, double sX2, double sY, double sY2, double sXY){
    double numerador = (n * sXY) - (sX * sY);
    double denominador = (sqrt((n * sX2) - pow(sX, 2)) * sqrt((n * sY2) - pow(sY, 2)));
    return numerador/denominador;
}

double calcularBCuadratica(double sX, double sY, double sXY, double sX2Y, double sX2, double sX3, double sX4, int n) {
    double numerador = (sXY - (sX * sY) / n) * (sX4 - (pow(sX2, 2) / n)) - (sX2Y - (sX2 * sY) / n) * (sX3 - (sX2 * sX) / n);
    double denominador = (sX2 - (pow(sX, 2) / n)) * (sX4 - (pow(sX2, 2) / n)) - pow((sX3 - (sX2 * sX) / n), 2);
    return numerador / denominador;
}

double calcularCCuadratica(double sX, double sY, double sXY, double sX2Y, double sX2, double sX3, double sX4, int n) {
    double numerador = (sX2Y - (sX2 * sY) / n) * (sX2 - (pow(sX, 2) / n)) - (sXY - (sX * sY) / n) * (sX3 - (sX2 * sX) / n);
    double denominador = (sX2 - (pow(sX, 2) / n)) * (sX4 - (pow(sX2, 2) / n)) - pow((sX3 - (sX2 * sX) / n), 2);
    return numerador / denominador;
}

double calcularACuadratica(double sX, double sX2, double sY, double b, double c, int n) {
    double numerador = sY - (b * sX) - (c * sX2);
    return numerador / n;
}

double calcularR2Cuadratica(double sX, double sX2, double sY, double sY2, double sXY, double sX2Y, int n, double b, double c) {
    double numerador = b * (sXY - (sX * sY) / n) + c * (sX2Y - (sX2 * sY) / n);
    double denominador = sY2 - pow(sY, 2) / n;
    return numerador / denominador;
}


//Programa principal
int main(){
    int cantDatos = 0;
    printf("\n\n------PROGRAMA DE SAMUEL DIAZ------\n\n");
    printf("\nIngrese cantidad de datos: ");
    scanf("%i", &cantDatos);
    //Creamos los arreglos con n cantidad de datos
    double varInd[cantDatos];
    double varDep[cantDatos];

    //Inicializamos los arreglos para no tener basura
    for(int i = 0; i<cantDatos; i++){
        varInd[i] = 0.0;
        varDep[i] = 0.0;
    }

    //Ingresando los datos
    for(int i = 0; i<cantDatos; i++){
        printf("\nIngrese el %i° dato de la variable x: ", i+1);
        scanf("%lf", &varInd[i]);
        printf("\nIngrese el %i° dato de la variable y: ", i+1);
        scanf("%lf", &varDep[i]);
    }

    double x = sumX(cantDatos, varInd);
    double x2 = sumXSqr(cantDatos, varInd);
    double xPr = sumLnX(cantDatos, varInd);
    double xPr2 = sumLnXSqr(cantDatos, varInd);
    double y = sumY(cantDatos, varDep);
    double y2 = sumYSqr(cantDatos, varDep);
    double yPr = sumLnY(cantDatos, varDep);
    double yPr2 = sumLnYSqr(cantDatos, varDep);
    double xy = sumXY(cantDatos, varInd, varDep);
    double xPry = sumlnXY(cantDatos, varInd, varDep);
    double xyPr = sumXlnY(cantDatos, varInd, varDep);
    double xPrYPr = sumlnXlnY(cantDatos, varInd, varDep);
    double xLog = sumLogX(cantDatos, varInd);
    double xLogSqr = sumLogXSqr(cantDatos, varInd);
    double yLog = sumLogY(cantDatos, varDep);
    double yLogSqr = sumLogYSqr(cantDatos, varDep);
    double xLogY = sumLogXLogY(cantDatos, varInd, varDep);
    double X3 = sumXCube(cantDatos, varInd);
    double X2Y = sumX2Y(cantDatos, varInd, varDep);
    double X4 = sumXCuarta(cantDatos, varInd);




    //Modelo Lineal
    double bLin = calcularB(cantDatos, x, x2, y, xy);
    double aLin = calcularA(cantDatos, x, y, bLin);
    double rLin = calcularR(cantDatos, x, x2, y, y2, xy);
    //Modelo exponencial
    double bExp = calcularB(cantDatos, x, x2, yPr, xyPr);
    double aExp = exp(calcularA(cantDatos, x, yPr, bExp));
    double rExp = calcularR(cantDatos, x, x2, yPr, yPr2, xyPr);
    //Modelo Logaritmico
    double bLog = calcularB(cantDatos, xPr, xPr2, y, xPry);
    double aLog = calcularA(cantDatos, xPr, y, bLog);
    double rLog = calcularR(cantDatos, xPr, xPr2, y, y2, xPry);
    //Modelo Potencial
    double bPwr = calcularB(cantDatos, xLog, xLogSqr, yLog, xLogY);
    double aPwr = pow(10, calcularA(cantDatos, xLog, yLog, bPwr));
    double rPwr = calcularR(cantDatos, xLog, xLogSqr, yLog, yLogSqr, xLogY);
    //Modelo Cuadratico
    double bCuadratico = calcularBCuadratica(x, y, xy, X2Y, x2, X3, X4, cantDatos);
    double cCuadraico = calcularCCuadratica(x, y, xy, X2Y, x2, X3, X4, cantDatos);
    double aCuadratica = calcularACuadratica(x, x2, y, bCuadratico, cCuadraico, cantDatos);
    double rCuadratico = calcularR2Cuadratica(x, x2, y, y2, xy, X2Y, cantDatos, bCuadratico, cCuadraico);

    printf("\n--------------DATOS--------------\n");
    for(int i = 0; i<cantDatos; i++){
        printf("\n{%.2lf, %.2lf}", varInd[i], varDep[i]);
    }

    printf("\n--------------LINEAL--------------\n");
    printf("B = %.4lf", bLin);
    printf("\nA = %0.4lf", aLin);
    printf("\nR = %.4lf", rLin);
    printf("\nR^2 = %.4lf", pow(rLin, 2) * 100);
    printf("\nFORMULA: y= %.2f + %.2fx", aLin, bLin);
    printf("\n--------------EXPONENCIAL/NO LINEAL--------------\n");
    printf("B = %.4lf", bExp);
    printf("\nA = %.4lf", aExp);
    printf("\nR = %.4lf", rExp);
    printf("\nR^2 = %.4lf", pow(rLin, 2) * 100);
    printf("\nFORMULA: y= %.2fe^(%.2fx)", aExp, bExp);
    printf("\n--------------LOGARITMICA--------------\n");
    printf("B = %.4lf", bLog);
    printf("\nA = %0.4lf", aLog);
    printf("\nR = %.4lf", rLog);
    printf("\nR^2 = %.4lf", pow(rLog, 2) * 100);
    printf("\nFORMULA: y= %.2f + %.2fln(x)", aLog, bLog);
    printf("\n--------------POTENCIAL--------------\n");
    printf("B = %.4lf", bPwr);
    printf("\nA = %.4lf", aPwr);
    printf("\nR = %.4lf", rPwr);
    printf("\nR^2 = %.4lf", pow(rPwr, 2) * 100);
    printf("\nFORMULA: y= %.2lfx^(%.2lf)", aPwr, bPwr);
    printf("\n--------------CUADRATICA--------------\n");
    printf("B = %.4lf", bCuadratico);
    printf("\nC = %.4lf", cCuadraico);
    printf("\nA = %.4lf", aCuadratica);
    printf("\nR^2 = %.4lf", rCuadratico);
    printf("\nR = %.4lf", sqrt(rCuadratico));
    printf("\nFORMULA: y= %.2f + %.2fx + %.2fx^2", aCuadratica, bCuadratico, cCuadraico);

}