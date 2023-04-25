float fahrToCelsius(float fahr);

float farhToCelsius(float fahr){
    return (5.0/9.0) * (fahr-32.0);
}

float main()
{
    float fahr;
    float celsius;

    fahr = 180;

    celsius = farhToCelsius(fahr);
    
    printf("fahr: %f is celsius: %f",fahr, celsius);
}

