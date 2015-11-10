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

  // Exported field_instance: 'node-enlace_destacado-field_enlace_destacado'.
  $field_instances['node-enlace_destacado-field_enlace_destacado'] = array(
    'bundle' => 'enlace_destacado',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ingrese la URL interna o externa a la página o sitio donde se realizará el vinculo',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_enlace_destacado',
    'label' => 'Enlace destacado',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 1,
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-enlace_destacado-field_featured_link_imagen'.
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
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
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
      'max_resolution' => '309x70',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-enlace_destacado-field_titulo_parte_1'.
  $field_instances['node-enlace_destacado-field_titulo_parte_1'] = array(
    'bundle' => 'enlace_destacado',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ingrese la <em>primera</em> parte del título que heredará propiedades de estilo específicas para ajustar la fuente del texto según el diseño del enlace destacado',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_titulo_parte_1',
    'label' => 'Título parte 1',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-enlace_destacado-field_titulo_parte_2'.
  $field_instances['node-enlace_destacado-field_titulo_parte_2'] = array(
    'bundle' => 'enlace_destacado',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ingrese la <em>segunda</em> parte del título que heredará propiedades de estilo específicas para ajustar la fuente del texto según el diseño del enlace destacado',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_titulo_parte_2',
    'label' => 'Título parte 2',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enlace destacado');
  t('Imagen');
  t('Título parte 1');
  t('Título parte 2');
  t('Utilice este campo para incluir una imágen relacionada con el contenido que será destacado');
  t('ingrese la <em>primera</em> parte del título que heredará propiedades de estilo específicas para ajustar la fuente del texto según el diseño del enlace destacado');
  t('ingrese la <em>segunda</em> parte del título que heredará propiedades de estilo específicas para ajustar la fuente del texto según el diseño del enlace destacado');
  t('ingrese la URL interna o externa a la página o sitio donde se realizará el vinculo');

  return $field_instances;
}
