<?php
// $Id: casetracker_views_handler_field_status_name.inc,v 1.3.2.1 2009/03/09 15:58:22 jmiccolis Exp $

/**
 * Field handler to show Selective state.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_field_property_name extends views_handler_field {

  /**
   * Not sure how to properties to their template - probably need a field for each.
   */
  function render($values) {
    if ($values->{$this->field_alias}) {
      // TODO retrieve the appropriate template and use the human readable name of the property.
      return check_plain($values->{$this->field_alias});
    }
    return '';
  }
}
