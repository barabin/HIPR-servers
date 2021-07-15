/*----- PROTECTED REGION ID(TPM101StateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        TPM101StateMachine.cpp
//
// description : State machine file for the TPM101 class
//
// project :     TPM101
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <TPM101.h>

/*----- PROTECTED REGION END -----*/	//	TPM101::TPM101StateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  
//  FAULT   |  


namespace TPM101_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TPM101::is_Temperature_allowed()
 *	Description : Execution allowed for Temperature attribute
 */
//--------------------------------------------------------
bool TPM101::is_Temperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for Temperature attribute in read access.
	/*----- PROTECTED REGION ID(TPM101::TemperatureStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TPM101::TemperatureStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TPM101::is_PidStatus_allowed()
 *	Description : Execution allowed for PidStatus attribute
 */
//--------------------------------------------------------
bool TPM101::is_PidStatus_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for PidStatus attribute in read access.
	/*----- PROTECTED REGION ID(TPM101::PidStatusStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TPM101::PidStatusStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : TPM101::is_PidOn_allowed()
 *	Description : Execution allowed for PidOn attribute
 */
//--------------------------------------------------------
bool TPM101::is_PidOn_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for PidOn command.
	/*----- PROTECTED REGION ID(TPM101::PidOnStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TPM101::PidOnStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TPM101::is_PidOff_allowed()
 *	Description : Execution allowed for PidOff attribute
 */
//--------------------------------------------------------
bool TPM101::is_PidOff_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for PidOff command.
	/*----- PROTECTED REGION ID(TPM101::PidOffStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TPM101::PidOffStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : TPM101::is_InitCOM_allowed()
 *	Description : Execution allowed for InitCOM attribute
 */
//--------------------------------------------------------
bool TPM101::is_InitCOM_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for InitCOM command.
	/*----- PROTECTED REGION ID(TPM101::InitCOMStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	TPM101::InitCOMStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(TPM101::TPM101StateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	TPM101::TPM101StateAllowed.AdditionalMethods

}	//	End of namespace