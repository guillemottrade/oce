// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_BiPnt2D_HeaderFile
#define _HLRBRep_BiPnt2D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class TopoDS_Shape;
class gp_Pnt2d;


//! Contains the colors of a shape.
class HLRBRep_BiPnt2D 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_BiPnt2D();
  
  Standard_EXPORT HLRBRep_BiPnt2D(const Standard_Real x1, const Standard_Real y1, const Standard_Real x2, const Standard_Real y2, const TopoDS_Shape& S, const Standard_Boolean reg1, const Standard_Boolean regn, const Standard_Boolean outl, const Standard_Boolean intl);
  
     const  gp_Pnt2d& P1()  const;
  
     const  gp_Pnt2d& P2()  const;
  
     const  TopoDS_Shape& Shape()  const;
  
      void Shape (const TopoDS_Shape& S) ;
  
      Standard_Boolean Rg1Line()  const;
  
      void Rg1Line (const Standard_Boolean B) ;
  
      Standard_Boolean RgNLine()  const;
  
      void RgNLine (const Standard_Boolean B) ;
  
      Standard_Boolean OutLine()  const;
  
      void OutLine (const Standard_Boolean B) ;
  
      Standard_Boolean IntLine()  const;
  
      void IntLine (const Standard_Boolean B) ;




protected:





private:



  gp_Pnt2d myP1;
  gp_Pnt2d myP2;
  TopoDS_Shape myShape;
  Standard_Integer myFlags;


};


#include <HLRBRep_BiPnt2D.lxx>





#endif // _HLRBRep_BiPnt2D_HeaderFile
