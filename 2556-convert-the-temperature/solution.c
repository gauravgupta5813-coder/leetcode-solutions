/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double * result = (double*)malloc(2*sizeof(double));

    double Kelvin = celsius + 273.15;
    double Fahrenheit = celsius * 1.80 + 32.00;

    result[0] = Kelvin;
    result[1] = Fahrenheit;
    
    * returnSize = 2;

    return result;
}
