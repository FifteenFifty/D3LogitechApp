#ifndef EXTRA_TESTER_H_INCLUDED_
#define EXTRA_TESTER_H_INCLUDED_

#include "EZ_LCD.h"
#include <vector>

class ExtraTester
{
public:
    static VOID DoButtonTestingMono(CEzLcd &lcd);
    static VOID DoButtonTestingColor(CEzLcd &lcd);

    static VOID DoScreenPriorityTesting(CEzLcd &lcd);

    static VOID DoForegroundTesting(CEzLcd &lcd);

    static VOID DoVisibleTesting(CEzLcd &lcd, std::vector<HANDLE> handles);

    static VOID DoPageTesting(CEzLcd &lcd);
};

#endif // EXTRA_TESTER_H_INCLUDED_