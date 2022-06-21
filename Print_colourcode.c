#include "ColorCode.h"

void PrintColorCode_pairnumber()
{
  int major_colour;
  int minor_colour;
  int pairnumber = 1;
  
  Printf("Pair Number. Manjor colur Minor colour \n");
  for(major_colour = 0; major_colour < numberOfMajorColors; major_colour++)
    {
        for(minor_colour = 0; minor_colour < numberOfMinorColors; minor_colour++)
        {
            printf("   %d \t    %s\t  %s\t\n",pairnumber++, majorColors[major_colour], minorColors[major_colour]);
        }
    }
  
}
