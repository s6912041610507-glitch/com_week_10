#include <stdio.h>
#include <string.h>

int main()
{
    char name[3][20] = {
        "Thanaporn",
        "Pichamol",
        "Tankhwan"
    };

    /* คะแนนชุดใหม่ */
    float math[3] = {85.00, 72.00, 64.00};
    float phy[3]  = {78.50, 91.00, 69.50};
    float chem[3] = {92.00, 76.50, 88.00};

    float avgMath, avgPhy, avgChem;
    int i;

    /* คำนวณค่าเฉลี่ย */
    avgMath = (math[0] + math[1] + math[2]) / 3;
    avgPhy  = (phy[0] + phy[1] + phy[2]) / 3;
    avgChem = (chem[0] + chem[1] + chem[2]) / 3;

    /* แสดงผล */
    printf("============================================================\n");
    printf("Student (length)                 Math       Phy       Chem\n");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("%-12s (%d)              %7.2f     %7.2f     %7.2f\n",
               name[i],
               (int)strlen(name[i]),
               math[i],
               phy[i],
               chem[i]);
    }

    printf("------------------------------------------------------------\n");

    printf("%-30s %7.2f     %7.2f     %7.2f\n",
           "Subject average",
           avgMath,
           avgPhy,
           avgChem);

    printf("============================================================\n");

    return 0;
}