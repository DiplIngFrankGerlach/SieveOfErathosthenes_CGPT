#include "stdafx.h"
#include "header_AppMain.ai.h"

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var='a';
   PrintfClass pfc;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   PrimeSieve ps(stackStartPtr,1000000);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ps.printFirstNPrimes(stackStartPtr,10000);
   return 1;
   
   
} //End Of Method

