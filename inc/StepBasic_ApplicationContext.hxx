// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApplicationContext_HeaderFile
#define _StepBasic_ApplicationContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ApplicationContext_HeaderFile
#include <Handle_StepBasic_ApplicationContext.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;



class StepBasic_ApplicationContext : public MMgt_TShared {

public:

  //! Returns a ApplicationContext <br>
  Standard_EXPORT   StepBasic_ApplicationContext();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aApplication) ;
  
  Standard_EXPORT     void SetApplication(const Handle(TCollection_HAsciiString)& aApplication) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Application() const;




  DEFINE_STANDARD_RTTI(StepBasic_ApplicationContext)

protected:




private: 


Handle_TCollection_HAsciiString application;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif