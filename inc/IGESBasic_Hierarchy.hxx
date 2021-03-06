// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_Hierarchy_HeaderFile
#define _IGESBasic_Hierarchy_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_Hierarchy.hxx>

#include <Standard_Integer.hxx>
#include <IGESData_IGESEntity.hxx>


//! defines Hierarchy, Type <406> Form <10>
//! in package IGESBasic
//! Provides ability to control the hierarchy of each
//! directory entry attribute.
class IGESBasic_Hierarchy : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESBasic_Hierarchy();
  
  //! This method is used to set the fields of the class
  //! Hierarchy
  //! - nbPropVal     : Number of Property values = 6
  //! - aLineFont     : indicates the line font
  //! - aView         : indicates the view
  //! - aEntityLevel  : indicates the entity level
  //! - aBlankStatus  : indicates the blank status
  //! - aLineWt       : indicates the line weight
  //! - aColorNum     : indicates the color num
  //! aLineFont, aView, aEntityLevel, aBlankStatus, aLineWt and
  //! aColorNum can take 0 or 1.
  //! 0 : The directory entry attribute will apply to entities
  //! physically subordinate to this entity.
  //! 1 : The directory entry attribute of this entity will not
  //! apply to physically subordinate entities.
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Standard_Integer aLineFont, const Standard_Integer aView, const Standard_Integer anEntityLevel, const Standard_Integer aBlankStatus, const Standard_Integer aLineWt, const Standard_Integer aColorNum) ;
  
  //! returns the number of property values, which should be 6
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the line font
  Standard_EXPORT   Standard_Integer NewLineFont()  const;
  
  //! returns the view
  Standard_EXPORT   Standard_Integer NewView()  const;
  
  //! returns the entity level
  Standard_EXPORT   Standard_Integer NewEntityLevel()  const;
  
  //! returns the blank status
  Standard_EXPORT   Standard_Integer NewBlankStatus()  const;
  
  //! returns the line weight
  Standard_EXPORT   Standard_Integer NewLineWeight()  const;
  
  //! returns the color number
  Standard_EXPORT   Standard_Integer NewColorNum()  const;




  DEFINE_STANDARD_RTTI(IGESBasic_Hierarchy)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Integer theLineFont;
  Standard_Integer theView;
  Standard_Integer theEntityLevel;
  Standard_Integer theBlankStatus;
  Standard_Integer theLineWeight;
  Standard_Integer theColorNum;


};







#endif // _IGESBasic_Hierarchy_HeaderFile
