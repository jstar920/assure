#include "assure.h"
int main(int argc, char* arg[])
{
    assure::AssureSession::getInstance().excute();
    return 0;
}