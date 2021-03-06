/**
* \file seg_evn.c
*
* Event type segment (EVN) accessors for the HL7 parser.
*
* \internal
* Copyright (c) 2011 Juan Jose Comellas <juanjo@comellas.org>
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
#include <hl7parser/seg_evn.h>

BEGIN_C_DECL()

/* ------------------------------------------------------------------------ */
HL7_EXPORT time_t hl7_evn_recorded_date( HL7_Segment *segment )
{
    return hl7_element_date( hl7_segment_field( segment, 1 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_evn_set_recorded_date( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_evn_set_recorded_date_time( HL7_Segment *segment, const time_t value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_date( &element, value, true, true, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT time_t hl7_evn_planned_event_date( HL7_Segment *segment )
{
    return hl7_element_date( hl7_segment_field( segment, 2 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_evn_set_planned_event_date( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 2, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_evn_set_planned_event_date_time( HL7_Segment *segment, const time_t value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_date( &element, value, true, true, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 2, &element ) : rc );
}

END_C_DECL()
