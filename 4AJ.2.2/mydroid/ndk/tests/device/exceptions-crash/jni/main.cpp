/* This test is meant to check that C++ exceptions do not crash
 * when running on Eclair or older platform releases. It will
 * always succeed on later versions of the  platform!
 */

extern int foo(void);

int main(int argc, char** argv)
{
    (void) foo();
    return 0;
}
