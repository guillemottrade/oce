// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Reducer_HeaderFile
#define _TopOpeBRepDS_Reducer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
class TopOpeBRepDS_HDataStructure;
class TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State;


//! reduce interferences of a data structure (HDS)
//! used in topological operations.
class TopOpeBRepDS_Reducer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_Reducer(const Handle(TopOpeBRepDS_HDataStructure)& HDS);
  
  Standard_EXPORT   void ProcessFaceInterferences (const TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State& M) ;
  
  Standard_EXPORT   void ProcessEdgeInterferences() ;




protected:





private:



  Handle(TopOpeBRepDS_HDataStructure) myHDS;


};







#endif // _TopOpeBRepDS_Reducer_HeaderFile
