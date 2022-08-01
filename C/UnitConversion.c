#include <stdio.h>
int main()
{
    char input;
    float KmstoMiles = 0.621371;
    float InchestoFoot = 0.083333;
    float CmstoInches = 0.393701;
    float PoundstoKgs = 0.453592;
    float InchestoMeters = 0.0254;
    float original, converted;

    start:

    printf(" Enter 0 to exit\n Enter 1 for KmstoMiles\n Enter 2 for InchestoFoot\n Enter 3 for CmstoInches\n Enter 4 for PoundstoKgs\n Enter 5 for InchestoMeters\n");

    scanf("%c", &input);

    switch (input)
    {
    case '0':
        printf("Quitting the program...");
        goto end;
    case '1':
        printf("Enter the  Unit:");
        scanf("%f", &original);
        converted = original * KmstoMiles;
        printf("%f Kms is %f Miles\n", original, converted);
        goto start;
        break;
    case '2':
        printf("Enter the  Unit:");
        scanf("%f", &original);
        converted = original * InchestoFoot;
        printf("%f Inches is %f Foot\n", original, converted);
        break;
    case '3':
        printf("Enter the  Unit:");
        scanf("%f", &original);
        converted = original * CmstoInches;
        printf("%f Cms is %f Inches\n", original, converted);
        break;

    case '4':
        printf("Enter the  Unit:");
        scanf("%f", &original);
        converted = original * PoundstoKgs;
        printf("%f Pounds is %f Kgs\n", original, converted);
        break;
    case '5':
        printf("Enter the  Unit:");
        scanf("%f", &original);
        converted = original * InchestoMeters;
        printf("%f Inches is %f Meters\n", original, converted);
        break;
    default:
        break;
    }

    end:
}