
//#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
//#include <setjmp.h>
#include "thxiip.h"
#include "cppfbp.h"

void thxfcbs(Appl *appl_ptr)
{
	cp *cpp, *old_cpp;
	Process *this_proc;
	Cnxt *this_cnxt;

	
		this_proc = (Process*) appl_ptr -> first_child_proc;
	    while (this_proc != 0) {
		appl_ptr -> first_child_proc = this_proc -> next_proc;
		  cpp = this_proc -> out_cps;
		  while (cpp != 0) {
			old_cpp = cpp;
			cpp = cpp -> succ;
			free(old_cpp);
		  }
		  cpp = this_proc -> in_cps;
		  while (cpp != 0) {
			//for (i = 0; i < cpp -> elem_count; i++) {
				//Cnxt * cnp = (Cnxt *) cpp -> elem_list[i].gen.connxn;
				//if (cnp != 0) {						
					//free(cnp);
				//}
			//}
			old_cpp = cpp;
			cpp = cpp -> succ;
			free(old_cpp);
		  }
		  //old_proc = this_proc;
		  //this_proc = this_proc -> next_proc;
		  this_proc -> mtx.~mutex();
		  this_proc -> canGo.~condition_variable_any();
		  //delete this_proc;
		  this_proc = (Process*) appl_ptr -> first_child_proc;
	}

	this_cnxt = (Cnxt *)appl_ptr -> first_cnxt;
	while (this_cnxt != 0) {
		appl_ptr -> first_cnxt = this_cnxt -> succ;
		//delete this_cnxt;
		this_cnxt = (Cnxt *)appl_ptr -> first_cnxt;
	}

	//if (!deadsw) {
		//delete appl_ptr;
		//printf("Done\n");
	//}
} 