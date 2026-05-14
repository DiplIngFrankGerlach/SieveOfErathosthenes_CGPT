#include "stdafx.h"
#include "header_AppMain.ai.h"

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var='a';
   PrintfClass pfc;
   SPRStackArrayConcrete<char,13> spr_StringScratch0;strncpy_s(spr_StringScratch0._array,13,"Hello World",13);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratch0).pr(stackStartPtr);
   return 1;
   
   
} //End Of Method

