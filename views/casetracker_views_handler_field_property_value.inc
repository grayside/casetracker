<?php
// $Id: casetracker_views_handler_field_user_name.inc,v 1.1 2009/02/09 23:22:58 jmiccolis Exp $

/**
 * Field handler to show property value.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_field_property_value extends views_handler_field {

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    ctools_include('export');
    $templates = ctools_export_load_object('casetracker_templates', 'all');
    $options;
    foreach ($templates as $t) {
      $options[$t->name] = check_plain($t->name);
    }
    $form['template'] = array(
      '#title' => t('Template'),
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => $this->options['template'],
    );
  }

  function render($values) {
    // krumo($this);
    // krumo($values);
    return '';
  }

}
