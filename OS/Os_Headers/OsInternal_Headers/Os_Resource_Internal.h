#ifndef OS_HEADERS_OSINTERNAL_HEADERS_OS_RESOURCE_INTERNAL_H_
#define OS_HEADERS_OSINTERNAL_HEADERS_OS_RESOURCE_INTERNAL_H_

/*******************************************************************/

typedef VAR( uint64, TYPEDEF ) ResourceMaskType ;


/*******************************************************************/


typedef struct
{
    /*This specifies the type of the resource*/
    VAR( uint8, AUTOMATIC ) OsResourceProperty ;

    /*This specifies the ceiling priority of the resource*/
    VAR( uint8, AUTOMATIC ) OsResourcePriority ;

    /* link to the resource. Must be valid if OsResourceProperty is LINKED.
     * If OsResourceProperty is not LINKED the value is ignored
     * this hold resource id linked to this resource */
    VAR( ResourceType, AUTOMATIC ) OsResourceLinkedResourceRef ;


} OsResource ;

/*******************************************************************/

typedef struct
{

    /*This specifies the id of task own this resource */
    VAR( TaskType, AUTOMATIC ) OsResourceOwner ;

    /*This specifies  the id of resource occupied by OsResourceOwner before this resource*/
    VAR( ResourceType, AUTOMATIC ) OsPreviousResource ;


} OsResource_PCB ;

/*******************************************************************/

void Resource_IsrMask ( uint8 ResourcePriority ) ;


#endif /* OS_HEADERS_OSINTERNAL_HEADERS_OS_RESOURCE_INTERNAL_H_ */
