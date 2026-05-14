#include "stdafx.h"
#include "header_AppMain.ai.h"

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var='a';
   PrintfClass pfc;
   int N;N=10000000;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   Bitmap bm(stackStartPtr,N);
   {//begin of SPR for statement
   int i;i=0;
   while(i<N){
      int im3;im3=i%3;
      if(im3==0){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         bm.setBit(stackStartPtr,i);
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   {//begin of SPR for statement
   int i;i=0;
   while(i<N){
      int im3;im3=i%3;
      if(im3==0){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(bm.getBit(stackStartPtr,i)!=1){
            SPRStackArrayConcrete<char,8> spr_StringScratch0;strncpy_s(spr_StringScratch0._array,8,"FEHLER",8);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch0).pr(stackStartPtr);
            
         }
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(bm.getBit(stackStartPtr,i)!=0){
            SPRStackArrayConcrete<char,11> spr_StringScratch1;strncpy_s(spr_StringScratch1._array,11,"FEHLER2 $",11);
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratch1).sa(stackStartPtr,i).pr(stackStartPtr);
            
         }
         }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

