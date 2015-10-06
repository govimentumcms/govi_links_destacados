<?php
/**
 * @file
 * govi_links_destacados.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_links_destacados_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-enlace_destacado-field_clasificaci_n'
  $field_instances['node-enlace_destacado-field_clasificaci_n'] = array(
    'bundle' => 'enlace_destacado',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una opción.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_clasificaci_n',
    'label' => 'Clasificación',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-enlace_destacado-field_featured_link_imagen'
  $field_instances['node-enlace_destacado-field_featured_link_imagen'] = array(
    'bundle' => 'enlace_destacado',
    'deleted' => 0,
    'description' => 'Utilice este campo para incluir una imágen relacionada con el contenido que será destacado',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_link_imagen',
    'label' => 'Imagen',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '100 KB',
      'max_resolution' => '100x100',
      'min_resolution' => '45x45',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'imagen_enlace_destacado',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-enlace_destacado-field_featured_referencia'
  $field_instances['node-enlace_destacado-field_featured_referencia'] = array(
    'bundle' => 'enlace_destacado',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Utilice este campo para crear un enlace enlazar hacia contenido existente en el sitio',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(),
        'type' => 'entityreference_entity_id',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_referencia',
    'label' => 'Referencia',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Imagen');
  t('Referencia');
  t('Seleccione una opción.');
  t('Utilice este campo para crear un enlace enlazar hacia contenido existente en el sitio');
  t('Utilice este campo para incluir una imágen relacionada con el contenido que será destacado');

  return $field_instances;
}
