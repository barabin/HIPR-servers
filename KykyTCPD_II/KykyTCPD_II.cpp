/*----- PROTECTED REGION ID(KykyTCPD_II.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        KykyTCPD_II.cpp
//
// description : C++ source for the KykyTCPD_II class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               KykyTCPD_II are implemented in this file.
//
// project :     KykyTCPD_II
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


#include <KykyTCPD_II.h>
#include <KykyTCPD_IIClass.h>

/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II.cpp

/**
 *  KykyTCPD_II class description:
 *    Vacuum Pump cntr
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//  State         |  Inherited (no method)
//  Status        |  Inherited (no method)
//  PumpStart     |  pump_start
//  PumpStop      |  pump_stop
//  InitCOM       |  init_com
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  PumpState  |  Tango::DevUShort	Scalar
//  Frequency  |  Tango::DevUShort	Scalar
//  Current    |  Tango::DevUShort	Scalar
//  Voltage    |  Tango::DevUShort	Scalar
//================================================================

namespace KykyTCPD_II_ns
{
/*----- PROTECTED REGION ID(KykyTCPD_II::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::KykyTCPD_II()
 *	Description : Constructors for a Tango device
 *                implementing the classKykyTCPD_II
 */
//--------------------------------------------------------
KykyTCPD_II::KykyTCPD_II(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(KykyTCPD_II::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::constructor_1
}
//--------------------------------------------------------
KykyTCPD_II::KykyTCPD_II(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(KykyTCPD_II::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::constructor_2
}
//--------------------------------------------------------
KykyTCPD_II::KykyTCPD_II(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(KykyTCPD_II::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void KykyTCPD_II::delete_device()
{
	DEBUG_STREAM << "KykyTCPD_II::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::delete_device
	delete[] attr_PumpState_read;
	delete[] attr_Frequency_read;
	delete[] attr_Current_read;
	delete[] attr_Voltage_read;
}

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void KykyTCPD_II::init_device()
{
	DEBUG_STREAM << "KykyTCPD_II::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::init_device_before
	

	//	Get the device properties from database
	get_device_property();
	
	attr_PumpState_read = new Tango::DevUShort[1];
	attr_Frequency_read = new Tango::DevUShort[1];
	attr_Current_read = new Tango::DevUShort[1];
	attr_Voltage_read = new Tango::DevUShort[1];
	/*----- PROTECTED REGION ID(KykyTCPD_II::init_device) ENABLED START -----*/
	
	//	Initialize device
	FlagDebugIO = 0;
	init_crc16_tab();
	if(!simulationMode)
    {
      init_com(); 
    }
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::init_device
}

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void KykyTCPD_II::get_device_property()
{
	/*----- PROTECTED REGION ID(KykyTCPD_II::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("RS485_addr"));
	dev_prop.push_back(Tango::DbDatum("SimulationMode"));
	dev_prop.push_back(Tango::DbDatum("COMPortNb"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on KykyTCPD_IIClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		KykyTCPD_IIClass	*ds_class =
			(static_cast<KykyTCPD_IIClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize RS485_addr from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  rS485_addr;
		else {
			//	Try to initialize RS485_addr from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  rS485_addr;
		}
		//	And try to extract RS485_addr value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  rS485_addr;

		//	Try to initialize SimulationMode from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  simulationMode;
		else {
			//	Try to initialize SimulationMode from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  simulationMode;
		}
		//	And try to extract SimulationMode value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  simulationMode;

		//	Try to initialize COMPortNb from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  cOMPortNb;
		else {
			//	Try to initialize COMPortNb from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  cOMPortNb;
		}
		//	And try to extract COMPortNb value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  cOMPortNb;

	}

	/*----- PROTECTED REGION ID(KykyTCPD_II::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::get_device_property_after
}

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void KykyTCPD_II::always_executed_hook()
{
	DEBUG_STREAM << "KykyTCPD_II::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void KykyTCPD_II::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "KykyTCPD_II::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::read_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute PumpState related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void KykyTCPD_II::read_PumpState(Tango::Attribute &attr)
{
	DEBUG_STREAM << "KykyTCPD_II::read_PumpState(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::read_PumpState) ENABLED START -----*/
	unsigned char recwbuf[40] = { 0 };
	unsigned short crc, i;
	unsigned char adr_buf[8] = {(rS485_addr%0x100), 3, 0x10,3, 0,1, 0,0};	
	crc=CRC16(adr_buf,6);
	adr_buf[6]=crc%0x100; adr_buf[7]=crc/0x100;
	string str_buf;
	for(i=0; i<8; i++){
		str_buf.append(to_string((unsigned int)adr_buf[i]));
		str_buf.append(" ");
	}
	DEBUG_STREAM << "KykyTCPD_II::read_PumpStatee() - command is: " << str_buf << endl;

	if (!simulationMode)
	{
		write_read_com(adr_buf, recwbuf);
		*attr_PumpState_read=recwbuf[3]*0x100 + recwbuf[4];
	}
	//	Set the attribute value
	attr.set_value(attr_PumpState_read);
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::read_PumpState
}
//--------------------------------------------------------
/**
 *	Read attribute Frequency related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void KykyTCPD_II::read_Frequency(Tango::Attribute &attr)
{
	DEBUG_STREAM << "KykyTCPD_II::read_Frequency(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::read_Frequency) ENABLED START -----*/
	unsigned char recwbuf[40] = { 0 };
	unsigned short crc, i;
	unsigned char adr_buf[8] = {(rS485_addr%0x100), 3, 0x10,0, 0,1, 0,0};	
	crc=CRC16(adr_buf,6);
	adr_buf[6]=crc%0x100; adr_buf[7]=crc/0x100;
	string str_buf;
	for (i = 0; i<8; i++){
		str_buf.append(to_string((unsigned int)adr_buf[i]));
		str_buf.append(" ");
	}
	DEBUG_STREAM << "KykyTCPD_II::read_Frequency() - command is: " << str_buf << endl;

	if (!simulationMode)
	{
		write_read_com(adr_buf, recwbuf);
		*attr_Frequency_read=recwbuf[3]*0x100 + recwbuf[4];
	}
	//	Set the attribute value
	attr.set_value(attr_Frequency_read);
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::read_Frequency
}
//--------------------------------------------------------
/**
 *	Read attribute Current related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void KykyTCPD_II::read_Current(Tango::Attribute &attr)
{
	DEBUG_STREAM << "01: KykyTCPD_II::read_Current(Tango::Attribute &attr) entering... " << endl;
	Sleep(1);
	/*----- PROTECTED REGION ID(KykyTCPD_II::read_Current) ENABLED START -----*/
	unsigned char recwbuf[40] = { 0 };
	unsigned short i, crc = 0;
	unsigned char adr_buf[8] = {(rS485_addr%0x100), 3, 0x10,1, 0,1, 0,0};	
	crc = CRC16(adr_buf, 6);
	DEBUG_STREAM << "KykyTCPD_II::read_Current() - CRC = " << crc << endl;
	Sleep(1);
	adr_buf[6] = crc % 0x100; adr_buf[7] = crc / 0x100;
	string str_buf;
	for (i = 0; i<8; i++){
		str_buf.append(to_string((unsigned int)adr_buf[i]));
		str_buf.append(" ");
	}
	DEBUG_STREAM << "KykyTCPD_II::read_Current() - command is: " << str_buf << endl;

	if (!simulationMode)
	{
		write_read_com(adr_buf, recwbuf);
		*attr_Current_read=recwbuf[3]*0x100 + recwbuf[4];
	}
	//	Set the attribute value
	attr.set_value(attr_Current_read);
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::read_Current
}
//--------------------------------------------------------
/**
 *	Read attribute Voltage related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void KykyTCPD_II::read_Voltage(Tango::Attribute &attr)
{
	DEBUG_STREAM << "KykyTCPD_II::read_Voltage(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::read_Voltage) ENABLED START -----*/
	unsigned char recwbuf[40] = { 0 };
	unsigned short crc, i;
	unsigned char adr_buf[8] = {(rS485_addr%0x100), 3, 0x10,2, 0,1, 0,0};	
	crc=CRC16(adr_buf,6);
	adr_buf[6]=crc%0x100; adr_buf[7]=crc/0x100;
	string str_buf;
	for (i = 0; i<8; i++){
		str_buf.append(to_string((unsigned int)adr_buf[i]));
		str_buf.append(" ");
	}
	DEBUG_STREAM << "KykyTCPD_II::read_Voltage() - command is: " << str_buf << endl;
	Sleep(1);
	
	if (!simulationMode)
	{
		write_read_com(adr_buf, recwbuf);
		*attr_Voltage_read=recwbuf[3]*0x100 + recwbuf[4];
	}
	//	Set the attribute value
	attr.set_value(attr_Voltage_read);
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::read_Voltage
}

//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void KykyTCPD_II::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(KykyTCPD_II::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command PumpStart related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void KykyTCPD_II::pump_start()
{
	DEBUG_STREAM << "KykyTCPD_II::PumpStart()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::pump_start) ENABLED START -----*/
	
	//	Add your own code
	unsigned char recwbuf[40] = { 0 };
	unsigned short crc, i;
	unsigned char adr_buf[8] = {(rS485_addr%0x100), 6, 0x20,0, 0,8, 0,0};	
	crc=CRC16(adr_buf,6);
	adr_buf[6]=crc%0x100; adr_buf[7]=crc/0x100;
	string str_buf;
	for (i = 0; i<8; i++){
		str_buf.append(to_string((unsigned int)adr_buf[i]));
		str_buf.append(" ");
	}
	DEBUG_STREAM << "KykyTCPD_II::PumpStart() - command is: " << str_buf << endl;

	if (!simulationMode)
	{
		write_read_com(adr_buf, recwbuf);
	}
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::pump_start
}
//--------------------------------------------------------
/**
 *	Command PumpStop related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void KykyTCPD_II::pump_stop()
{
	DEBUG_STREAM << "KykyTCPD_II::PumpStop()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::pump_stop) ENABLED START -----*/
	
	//	Add your own code
	unsigned char recwbuf[40] = { 0 };
	unsigned short crc, i;
	unsigned char adr_buf[8] = {(rS485_addr%0x100), 6, 0x20,0, 0,3, 0,0};	
	crc=CRC16(adr_buf,6);
	adr_buf[6]=crc%0x100; adr_buf[7]=crc/0x100;
	string str_buf;
	for (i = 0; i<8; i++){
		str_buf.append(to_string((unsigned int)adr_buf[i]));
		str_buf.append(" ");
	}
	DEBUG_STREAM << "KykyTCPD_II::PumpStop() - command is: " << str_buf << endl;

	if (!simulationMode)
	{
		write_read_com(adr_buf, recwbuf);
	}
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::pump_stop
}
//--------------------------------------------------------
/**
 *	Command InitCOM related method
 *	Description: Initialize COM port connection
 *
 */
//--------------------------------------------------------
void KykyTCPD_II::init_com()
{
	DEBUG_STREAM << "KykyTCPD_II::InitCOM()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(KykyTCPD_II::init_com) ENABLED START -----*/
	
	//	Add your own code
  DCB dcb1;
  COMMTIMEOUTS ctm1;
  CloseHandle(hCom1);
  wstring ps1;
  ps1 = L"\\\\.\\COM" + to_wstring(cOMPortNb);
  const wchar_t *pcCommPort = ps1.c_str();
  //TCHAR *pcCommPort = TEXT("COM7");
  hCom1 = CreateFile(pcCommPort,GENERIC_READ | GENERIC_WRITE,
        0,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,0);
  GetCommState(hCom1, &dcb1);
  dcb1.BaudRate = CBR_9600;
  dcb1.ByteSize = 8;
  dcb1.Parity = NOPARITY;//EVENPARITY;
  dcb1.StopBits = ONESTOPBIT;
  SetCommState(hCom1, &dcb1);
  GetCommTimeouts(hCom1, &ctm1);
  ctm1.ReadTotalTimeoutConstant = 1000;
  ctm1.WriteTotalTimeoutConstant = 1000;
  SetCommTimeouts(hCom1, &ctm1);
  PurgeComm(hCom1, PURGE_RXCLEAR);
  PurgeComm(hCom1, PURGE_TXCLEAR);
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::init_com
}
//--------------------------------------------------------
/**
 *	Method      : KykyTCPD_II::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void KykyTCPD_II::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(KykyTCPD_II::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::add_dynamic_commands
}

/*----- PROTECTED REGION ID(KykyTCPD_II::namespace_ending) ENABLED START -----*/

//	Additional Methods
void KykyTCPD_II::write_com(unsigned char* argin, short len)
{
	DEBUG_STREAM << "KykyTCPD_II::WriteCOM()  - " << device_name << endl;
	//	Add your own code
	DWORD i, alen;
	alen = sizeof(argin);
	WriteFile(hCom1,argin,alen, &i,NULL);
}

void KykyTCPD_II::write_read_com(unsigned char* argin, unsigned char *argout)
{
	DEBUG_STREAM << "n+1: KykyTCPD_II::WriteReadCOM()  - " << device_name << endl;
	Sleep(1);
	//	Add your own code
	COMSTAT Stat;
	bool res;
	DWORD err;
	unsigned long n;
	DWORD i, alen;
	alen = sizeof(argin);
	WriteFile(hCom1, argin, alen, &i, NULL);
	DEBUG_STREAM << "n+2: KykyTCPD_II::WriteReadCOM() - bytes transmitted: " << i << endl;
	Sleep(500);
	ClearCommError(hCom1, &err, &Stat);
	n = Stat.cbInQue;
	DEBUG_STREAM << "n+3: KykyTCPD_II::WriteReadCOM() - bytes in receive buffer: " << n << endl;
	Sleep(1);
	if(n!=0){ 
		res	= ReadFile(hCom1, argout, n, &err, NULL);
		string str_buf;
		for (i = 0; i<n; i++){
			str_buf.append(to_string((unsigned int)argout[i]));
			str_buf.append(" ");
		}
		DEBUG_STREAM << "KykyTCPD_II::read_Voltage() - command is: " << str_buf << endl;
		Sleep(1);
		DEBUG_STREAM << "n+4: KykyTCPD_II::WriteReadCOM() - bytes returned: = " << err << " , result: " << boolalpha << res << endl;
	}
}

unsigned short KykyTCPD_II::CRC16(unsigned char *argin, short len){
	unsigned short i, crc_16_modbus;
	crc_16_modbus = 0xffff;
	for(i=0;i<len;i++){
		crc_16_modbus = update_crc_16(crc_16_modbus, (unsigned short)argin[i]);
	}
	return crc_16_modbus;
}

unsigned short KykyTCPD_II::update_crc_16(unsigned short crc, unsigned short mc){
	unsigned short tmp, short_c;
	tmp = crc ^ mc;
	crc = (crc >> 8) ^ crc_tab16[tmp & 0xff];
	return crc;
}

void KykyTCPD_II::init_crc16_tab(void){
	unsigned short i,j,crc,c;
	for(i=0;i<256;i++){
		crc=0; c=i;
		for(j=0;j<8;j++){
			//crc = crc ^ c;
			if((crc ^ c) & 1) crc = (crc>>1) ^ 0xa001;
			else crc=crc>>1;
			c=c>>1;
		}
		crc_tab16[i]=crc;
	}
}
/*----- PROTECTED REGION END -----*/	//	KykyTCPD_II::namespace_ending
} //	namespace
