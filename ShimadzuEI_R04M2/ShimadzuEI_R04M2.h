/*----- PROTECTED REGION ID(ShimadzuEI_R04M2.h) ENABLED START -----*/
//=============================================================================
//
// file :        ShimadzuEI_R04M2.h
//
// description : Include file for the ShimadzuEI_R04M2 class
//
// project :     ShimadzuEI_R04M2
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


#ifndef ShimadzuEI_R04M2_H
#define ShimadzuEI_R04M2_H

#include <tango.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>


/*----- PROTECTED REGION END -----*/	//	ShimadzuEI_R04M2.h

/**
 *  ShimadzuEI_R04M2 class description:
 *    Vacuum Pump cntr
 */

namespace ShimadzuEI_R04M2_ns
{
enum class PumpStateEnum : Tango::DevEnum {
	_NA,
	_NN,
	_NB,
} ;
//typedef _PumpStateEnum PumpStateEnum;

enum class CtrlModeWriteEnum : Tango::DevEnum {
	_RS485,
	_REMOTE,
} ;
//typedef _CtrlModeWriteEnum CtrlModeWriteEnum;

enum class CtrlModeReadEnum : Tango::DevEnum {
	_LD,
	_LR,
} ;
//typedef _CtrlModeReadEnum CtrlModeReadEnum;

/*----- PROTECTED REGION ID(ShimadzuEI_R04M2::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	ShimadzuEI_R04M2::Additional Class Declarations

class ShimadzuEI_R04M2 : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(ShimadzuEI_R04M2::Data Members) ENABLED START -----*/

//	Add your own data members

/*----- PROTECTED REGION END -----*/	//	ShimadzuEI_R04M2::Data Members

//	Device property data members
public:
	//	RS485_addr:	
	Tango::DevUShort	rS485_addr;
	//	SimulationMode:	1 if simulation mode
	Tango::DevLong	simulationMode;
	//	COMPortNb:	COM Port Number
	Tango::DevUShort	cOMPortNb;

//	Attribute data members
public:
	PumpStateEnum	*attr_PumpState_read;
	CtrlModeReadEnum	*attr_CtrlModeRead_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	ShimadzuEI_R04M2(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	ShimadzuEI_R04M2(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	ShimadzuEI_R04M2(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~ShimadzuEI_R04M2() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : ShimadzuEI_R04M2::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : ShimadzuEI_R04M2::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute PumpState related methods
 *	Description: 
 *
 *	Data type:	Tango::DevEnum
 *	Attr type:	Scalar
 */
	virtual void read_PumpState(Tango::Attribute &attr);
	virtual bool is_PumpState_allowed(Tango::AttReqType type);
/**
 *	Attribute CtrlModeWrite related methods
 *	Description: 
 *
 *	Data type:	Tango::DevEnum
 *	Attr type:	Scalar
 */
	virtual void write_CtrlModeWrite(Tango::WAttribute &attr);
	virtual bool is_CtrlModeWrite_allowed(Tango::AttReqType type);
/**
 *	Attribute CtrlModeRead related methods
 *	Description: 
 *
 *	Data type:	Tango::DevEnum
 *	Attr type:	Scalar
 */
	virtual void read_CtrlModeRead(Tango::Attribute &attr);
	virtual bool is_CtrlModeRead_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : ShimadzuEI_R04M2::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command PumpStart related method
	 *	Description: 
	 *
	 */
	virtual void pump_start();
	virtual bool is_PumpStart_allowed(const CORBA::Any &any);
	/**
	 *	Command PumpStop related method
	 *	Description: 
	 *
	 */
	virtual void pump_stop();
	virtual bool is_PumpStop_allowed(const CORBA::Any &any);
	/**
	 *	Command InitCOM related method
	 *	Description: Initialize COM port connection
	 *
	 */
	virtual void init_com();
	virtual bool is_InitCOM_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : ShimadzuEI_R04M2::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(ShimadzuEI_R04M2::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes
public:
	string add_crc_str(string in_buffer, unsigned char len);
protected :	
	void write_com(const char *argin);
	void write_read_com(const char *argin, const unsigned long n, char *argout);
	HANDLE hCom1;	
	Tango::DevLong FlagDebugIO;
/*----- PROTECTED REGION END -----*/	//	ShimadzuEI_R04M2::Additional Method prototypes
};

/*----- PROTECTED REGION ID(ShimadzuEI_R04M2::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	ShimadzuEI_R04M2::Additional Classes Definitions

}	//	End of namespace

#endif   //	ShimadzuEI_R04M2_H
