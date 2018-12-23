#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
	
    gfxInitDefault();
	consoleInit(NULL);
	printf("ExeFS Manager - SMO (By CVFD)\n");
    printf("Press 'A' to Enable ExeFS Mods\n");
    printf("Press 'B' to Disable ExeFS Mods\n");
	printf("Press '+' to Exit\n");
    printf("This App will auto-exit when you choose an option.\n");
	
	while(appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
		if(kDown & KEY_B)
		{
        rename("/atmosphere/titles/0100000000010000/exefs/main", "/atmosphere/titles/0100000000010000/exefs/exefs.mod");
            break;
                        
        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
		}
		
		if(kDown & KEY_A)
		{
        rename("/atmosphere/titles/0100000000010000/exefs/exefs.mod", "/atmosphere/titles/0100000000010000/exefs/main");
            break;
            
        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
		}
		
        if (kDown & KEY_PLUS) break;
		
        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
    }

    consoleExit(NULL);		
    gfxExit();
    return 0;
}
