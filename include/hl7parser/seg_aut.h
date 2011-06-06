#ifndef HL7PARSER_SEG_AUT_H
#define HL7PARSER_SEG_AUT_H

/**
* \file seg_aut.h
*
* Authorization information segment (AUT) accessors for the HL7 parser.
*
* \internal
* Copyright (c) 2011 \b Erlar (http://erlar.com)
*
* \warning DO NOT MODIFY THIS FILE.
*
* Autogenerated by the ./hl7segdef.py script on Mon Jun  6 12:54:47 2011
*/

/* ------------------------------------------------------------------------
   Headers
   ------------------------------------------------------------------------ */

#include <hl7parser/config.h>
#include <hl7parser/element.h>
#include <hl7parser/export.h>
#include <hl7parser/segment.h>

BEGIN_C_DECL()

/* ------------------------------------------------------------------------
   Function prototypes
   ------------------------------------------------------------------------ */

/**
* Get the plan_id (AUT.1.1) component.
*/
HL7_EXPORT HL7_Element *hl7_aut_plan_id( HL7_Segment *segment );
/**
* Set the plan_id (AUT.1.1) component.
*/
HL7_EXPORT int hl7_aut_set_plan_id( HL7_Segment *segment, HL7_Element *element );
/**
* Set the plan_id (AUT.1.1) component as a string.
*/
HL7_EXPORT int hl7_aut_set_plan_id_str( HL7_Segment *segment, const char *value );
/**
* Get the plan_name (AUT.1.2) component.
*/
HL7_EXPORT HL7_Element *hl7_aut_plan_name( HL7_Segment *segment );
/**
* Set the plan_name (AUT.1.2) component.
*/
HL7_EXPORT int hl7_aut_set_plan_name( HL7_Segment *segment, HL7_Element *element );
/**
* Set the plan_name (AUT.1.2) component as a string.
*/
HL7_EXPORT int hl7_aut_set_plan_name_str( HL7_Segment *segment, const char *value );
/**
* Get the company_id (AUT.2.1) component.
*/
HL7_EXPORT HL7_Element *hl7_aut_company_id( HL7_Segment *segment );
/**
* Set the company_id (AUT.2.1) component.
*/
HL7_EXPORT int hl7_aut_set_company_id( HL7_Segment *segment, HL7_Element *element );
/**
* Set the company_id (AUT.2.1) component as a string.
*/
HL7_EXPORT int hl7_aut_set_company_id_str( HL7_Segment *segment, const char *value );
/**
* Get the company_name (AUT.2.2) component.
*/
HL7_EXPORT HL7_Element *hl7_aut_company_name( HL7_Segment *segment );
/**
* Set the company_name (AUT.2.2) component.
*/
HL7_EXPORT int hl7_aut_set_company_name( HL7_Segment *segment, HL7_Element *element );
/**
* Set the company_name (AUT.2.2) component as a string.
*/
HL7_EXPORT int hl7_aut_set_company_name_str( HL7_Segment *segment, const char *value );
/**
* Get the company_id_coding_system (AUT.2.3) component.
*/
HL7_EXPORT HL7_Element *hl7_aut_company_id_coding_system( HL7_Segment *segment );
/**
* Set the company_id_coding_system (AUT.2.3) component.
*/
HL7_EXPORT int hl7_aut_set_company_id_coding_system( HL7_Segment *segment, HL7_Element *element );
/**
* Set the company_id_coding_system (AUT.2.3) component as a string.
*/
HL7_EXPORT int hl7_aut_set_company_id_coding_system_str( HL7_Segment *segment, const char *value );
/**
* Get the start_date (AUT.4) field.
*/
HL7_EXPORT time_t hl7_aut_start_date( HL7_Segment *segment );
/**
* Set the start_date (AUT.4) field.
*/
HL7_EXPORT int hl7_aut_set_start_date( HL7_Segment *segment, HL7_Element *element );
/**
* Set the start_date (AUT.4) field as a time_t.
*/
HL7_EXPORT int hl7_aut_set_start_date_time( HL7_Segment *segment, const time_t value );
/**
* Get the end_date (AUT.5) field.
*/
HL7_EXPORT time_t hl7_aut_end_date( HL7_Segment *segment );
/**
* Set the end_date (AUT.5) field.
*/
HL7_EXPORT int hl7_aut_set_end_date( HL7_Segment *segment, HL7_Element *element );
/**
* Set the end_date (AUT.5) field as a time_t.
*/
HL7_EXPORT int hl7_aut_set_end_date_time( HL7_Segment *segment, const time_t value );
/**
* Get the authorization_id (AUT.6.1) component.
*/
HL7_EXPORT HL7_Element *hl7_aut_authorization_id( HL7_Segment *segment );
/**
* Set the authorization_id (AUT.6.1) component.
*/
HL7_EXPORT int hl7_aut_set_authorization_id( HL7_Segment *segment, HL7_Element *element );
/**
* Set the authorization_id (AUT.6.1) component as a string.
*/
HL7_EXPORT int hl7_aut_set_authorization_id_str( HL7_Segment *segment, const char *value );
/**
* Get the requested_treatments (AUT.8) field.
*/
HL7_EXPORT int hl7_aut_requested_treatments( HL7_Segment *segment );
/**
* Set the requested_treatments (AUT.8) field.
*/
HL7_EXPORT int hl7_aut_set_requested_treatments( HL7_Segment *segment, HL7_Element *element );
/**
* Set the requested_treatments (AUT.8) field as an integer.
*/
HL7_EXPORT int hl7_aut_set_requested_treatments_int( HL7_Segment *segment, const int value );
/**
* Get the authorized_treatments (AUT.9) field.
*/
HL7_EXPORT int hl7_aut_authorized_treatments( HL7_Segment *segment );
/**
* Set the authorized_treatments (AUT.9) field.
*/
HL7_EXPORT int hl7_aut_set_authorized_treatments( HL7_Segment *segment, HL7_Element *element );
/**
* Set the authorized_treatments (AUT.9) field as an integer.
*/
HL7_EXPORT int hl7_aut_set_authorized_treatments_int( HL7_Segment *segment, const int value );

END_C_DECL()

#endif /* HL7_SEG_AUT_H */