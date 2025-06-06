#include "shaderlib/cshader.h"
class pbr_ps30_Static_Index
{
private:
	int m_nFLASHLIGHT;
#ifdef _DEBUG
	bool m_bFLASHLIGHT;
#endif
public:
	void SetFLASHLIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLASHLIGHT = i;
#ifdef _DEBUG
		m_bFLASHLIGHT = true;
#endif
	}
	void SetFLASHLIGHT( bool i )
	{
		m_nFLASHLIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHT = true;
#endif
	}
private:
	int m_nFLASHLIGHTDEPTHFILTERMODE;
#ifdef _DEBUG
	bool m_bFLASHLIGHTDEPTHFILTERMODE;
#endif
public:
	void SetFLASHLIGHTDEPTHFILTERMODE( int i )
	{
		Assert( i >= 0 && i <= 2 );
		m_nFLASHLIGHTDEPTHFILTERMODE = i;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = true;
#endif
	}
	void SetFLASHLIGHTDEPTHFILTERMODE( bool i )
	{
		m_nFLASHLIGHTDEPTHFILTERMODE = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = true;
#endif
	}
private:
	int m_nLIGHTMAPPED;
#ifdef _DEBUG
	bool m_bLIGHTMAPPED;
#endif
public:
	void SetLIGHTMAPPED( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nLIGHTMAPPED = i;
#ifdef _DEBUG
		m_bLIGHTMAPPED = true;
#endif
	}
	void SetLIGHTMAPPED( bool i )
	{
		m_nLIGHTMAPPED = i ? 1 : 0;
#ifdef _DEBUG
		m_bLIGHTMAPPED = true;
#endif
	}
private:
	int m_nEMISSIVE;
#ifdef _DEBUG
	bool m_bEMISSIVE;
#endif
public:
	void SetEMISSIVE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nEMISSIVE = i;
#ifdef _DEBUG
		m_bEMISSIVE = true;
#endif
	}
	void SetEMISSIVE( bool i )
	{
		m_nEMISSIVE = i ? 1 : 0;
#ifdef _DEBUG
		m_bEMISSIVE = true;
#endif
	}
private:
	int m_nPARALLAXOCCLUSION;
#ifdef _DEBUG
	bool m_bPARALLAXOCCLUSION;
#endif
public:
	void SetPARALLAXOCCLUSION( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPARALLAXOCCLUSION = i;
#ifdef _DEBUG
		m_bPARALLAXOCCLUSION = true;
#endif
	}
	void SetPARALLAXOCCLUSION( bool i )
	{
		m_nPARALLAXOCCLUSION = i ? 1 : 0;
#ifdef _DEBUG
		m_bPARALLAXOCCLUSION = true;
#endif
	}
private:
	int m_nWVT;
#ifdef _DEBUG
	bool m_bWVT;
#endif
public:
	void SetWVT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWVT = i;
#ifdef _DEBUG
		m_bWVT = true;
#endif
	}
	void SetWVT( bool i )
	{
		m_nWVT = i ? 1 : 0;
#ifdef _DEBUG
		m_bWVT = true;
#endif
	}
private:
	int m_nPCC;
#ifdef _DEBUG
	bool m_bPCC;
#endif
public:
	void SetPCC( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPCC = i;
#ifdef _DEBUG
		m_bPCC = true;
#endif
	}
	void SetPCC( bool i )
	{
		m_nPCC = i ? 1 : 0;
#ifdef _DEBUG
		m_bPCC = true;
#endif
	}
private:
	int m_nHSV;
#ifdef _DEBUG
	bool m_bHSV;
#endif
public:
	void SetHSV( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHSV = i;
#ifdef _DEBUG
		m_bHSV = true;
#endif
	}
	void SetHSV( bool i )
	{
		m_nHSV = i ? 1 : 0;
#ifdef _DEBUG
		m_bHSV = true;
#endif
	}
private:
	int m_nHSV_BLEND;
#ifdef _DEBUG
	bool m_bHSV_BLEND;
#endif
public:
	void SetHSV_BLEND( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHSV_BLEND = i;
#ifdef _DEBUG
		m_bHSV_BLEND = true;
#endif
	}
	void SetHSV_BLEND( bool i )
	{
		m_nHSV_BLEND = i ? 1 : 0;
#ifdef _DEBUG
		m_bHSV_BLEND = true;
#endif
	}
public:
	pbr_ps30_Static_Index( )
	{
#ifdef _DEBUG
		m_bFLASHLIGHT = false;
#endif // _DEBUG
		m_nFLASHLIGHT = 0;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = false;
#endif // _DEBUG
		m_nFLASHLIGHTDEPTHFILTERMODE = 0;
#ifdef _DEBUG
		m_bLIGHTMAPPED = false;
#endif // _DEBUG
		m_nLIGHTMAPPED = 0;
#ifdef _DEBUG
		m_bEMISSIVE = false;
#endif // _DEBUG
		m_nEMISSIVE = 0;
#ifdef _DEBUG
		m_bPARALLAXOCCLUSION = false;
#endif // _DEBUG
		m_nPARALLAXOCCLUSION = 0;
#ifdef _DEBUG
		m_bWVT = false;
#endif // _DEBUG
		m_nWVT = 0;
#ifdef _DEBUG
		m_bPCC = false;
#endif // _DEBUG
		m_nPCC = 0;
#ifdef _DEBUG
		m_bHSV = false;
#endif // _DEBUG
		m_nHSV = 0;
#ifdef _DEBUG
		m_bHSV_BLEND = false;
#endif // _DEBUG
		m_nHSV_BLEND = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bFLASHLIGHT && m_bFLASHLIGHTDEPTHFILTERMODE && m_bLIGHTMAPPED && m_bEMISSIVE && m_bPARALLAXOCCLUSION && m_bWVT && m_bPCC && m_bHSV && m_bHSV_BLEND;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 160 * m_nFLASHLIGHT ) + ( 320 * m_nFLASHLIGHTDEPTHFILTERMODE ) + ( 960 * m_nLIGHTMAPPED ) + ( 1920 * m_nEMISSIVE ) + ( 3840 * m_nPARALLAXOCCLUSION ) + ( 7680 * m_nWVT ) + ( 15360 * m_nPCC ) + ( 30720 * m_nHSV ) + ( 61440 * m_nHSV_BLEND ) + 0;
	}
};
#define shaderStaticTest_pbr_ps30 psh_forgot_to_set_static_FLASHLIGHT + psh_forgot_to_set_static_FLASHLIGHTDEPTHFILTERMODE + psh_forgot_to_set_static_LIGHTMAPPED + psh_forgot_to_set_static_EMISSIVE + psh_forgot_to_set_static_PARALLAXOCCLUSION + psh_forgot_to_set_static_WVT + psh_forgot_to_set_static_PCC + psh_forgot_to_set_static_HSV + psh_forgot_to_set_static_HSV_BLEND + 0
class pbr_ps30_Dynamic_Index
{
private:
	int m_nWRITEWATERFOGTODESTALPHA;
#ifdef _DEBUG
	bool m_bWRITEWATERFOGTODESTALPHA;
#endif
public:
	void SetWRITEWATERFOGTODESTALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWRITEWATERFOGTODESTALPHA = i;
#ifdef _DEBUG
		m_bWRITEWATERFOGTODESTALPHA = true;
#endif
	}
	void SetWRITEWATERFOGTODESTALPHA( bool i )
	{
		m_nWRITEWATERFOGTODESTALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bWRITEWATERFOGTODESTALPHA = true;
#endif
	}
private:
	int m_nPIXELFOGTYPE;
#ifdef _DEBUG
	bool m_bPIXELFOGTYPE;
#endif
public:
	void SetPIXELFOGTYPE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPIXELFOGTYPE = i;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
	void SetPIXELFOGTYPE( bool i )
	{
		m_nPIXELFOGTYPE = i ? 1 : 0;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
private:
	int m_nNUM_LIGHTS;
#ifdef _DEBUG
	bool m_bNUM_LIGHTS;
#endif
public:
	void SetNUM_LIGHTS( int i )
	{
		Assert( i >= 0 && i <= 4 );
		m_nNUM_LIGHTS = i;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif
	}
	void SetNUM_LIGHTS( bool i )
	{
		m_nNUM_LIGHTS = i ? 1 : 0;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif
	}
private:
	int m_nWRITE_DEPTH_TO_DESTALPHA;
#ifdef _DEBUG
	bool m_bWRITE_DEPTH_TO_DESTALPHA;
#endif
public:
	void SetWRITE_DEPTH_TO_DESTALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWRITE_DEPTH_TO_DESTALPHA = i;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = true;
#endif
	}
	void SetWRITE_DEPTH_TO_DESTALPHA( bool i )
	{
		m_nWRITE_DEPTH_TO_DESTALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = true;
#endif
	}
private:
	int m_nFLASHLIGHTSHADOWS;
#ifdef _DEBUG
	bool m_bFLASHLIGHTSHADOWS;
#endif
public:
	void SetFLASHLIGHTSHADOWS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLASHLIGHTSHADOWS = i;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = true;
#endif
	}
	void SetFLASHLIGHTSHADOWS( bool i )
	{
		m_nFLASHLIGHTSHADOWS = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = true;
#endif
	}
private:
	int m_nLIGHTMAPPED_MODEL;
#ifdef _DEBUG
	bool m_bLIGHTMAPPED_MODEL;
#endif
public:
	void SetLIGHTMAPPED_MODEL( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nLIGHTMAPPED_MODEL = i;
#ifdef _DEBUG
		m_bLIGHTMAPPED_MODEL = true;
#endif
	}
	void SetLIGHTMAPPED_MODEL( bool i )
	{
		m_nLIGHTMAPPED_MODEL = i ? 1 : 0;
#ifdef _DEBUG
		m_bLIGHTMAPPED_MODEL = true;
#endif
	}
public:
	pbr_ps30_Dynamic_Index()
	{
#ifdef _DEBUG
		m_bWRITEWATERFOGTODESTALPHA = false;
#endif // _DEBUG
		m_nWRITEWATERFOGTODESTALPHA = 0;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = false;
#endif // _DEBUG
		m_nPIXELFOGTYPE = 0;
#ifdef _DEBUG
		m_bNUM_LIGHTS = false;
#endif // _DEBUG
		m_nNUM_LIGHTS = 0;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = false;
#endif // _DEBUG
		m_nWRITE_DEPTH_TO_DESTALPHA = 0;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = false;
#endif // _DEBUG
		m_nFLASHLIGHTSHADOWS = 0;
#ifdef _DEBUG
		m_bLIGHTMAPPED_MODEL = false;
#endif // _DEBUG
		m_nLIGHTMAPPED_MODEL = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bWRITEWATERFOGTODESTALPHA && m_bPIXELFOGTYPE && m_bNUM_LIGHTS && m_bWRITE_DEPTH_TO_DESTALPHA && m_bFLASHLIGHTSHADOWS && m_bLIGHTMAPPED_MODEL;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nWRITEWATERFOGTODESTALPHA ) + ( 2 * m_nPIXELFOGTYPE ) + ( 4 * m_nNUM_LIGHTS ) + ( 20 * m_nWRITE_DEPTH_TO_DESTALPHA ) + ( 40 * m_nFLASHLIGHTSHADOWS ) + ( 80 * m_nLIGHTMAPPED_MODEL ) + 0;
	}
};
#define shaderDynamicTest_pbr_ps30 psh_forgot_to_set_dynamic_WRITEWATERFOGTODESTALPHA + psh_forgot_to_set_dynamic_PIXELFOGTYPE + psh_forgot_to_set_dynamic_NUM_LIGHTS + psh_forgot_to_set_dynamic_WRITE_DEPTH_TO_DESTALPHA + psh_forgot_to_set_dynamic_FLASHLIGHTSHADOWS + psh_forgot_to_set_dynamic_LIGHTMAPPED_MODEL + 0
