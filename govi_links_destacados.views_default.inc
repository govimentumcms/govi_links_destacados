<?php
/**
 * @file
 * govi_links_destacados.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_links_destacados_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_clone_of_links_destacados_principal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Links Apropiación Social TIC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links Apropiación Social TIC';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['column_classes'] = 'pure-u-24-24 views-column';
  $handler->display->display_options['style_options']['row_classes'] = 'pure-g views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_featured_link_imagen']['id'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['table'] = 'field_data_field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['field'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_link_imagen']['settings'] = array(
    'image_style' => 'imagen_enlace_destacado',
    'image_link' => '',
  );
  /* Field: Content: Referencia */
  $handler->display->display_options['fields']['field_featured_referencia']['id'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['table'] = 'field_data_field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['field'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['label'] = '';
  $handler->display->display_options['fields']['field_featured_referencia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['text'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['path'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_referencia']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_featured_referencia']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_featured_referencia]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enlace_destacado' => 'enlace_destacado',
  );
  /* Filter criterion: Content: Clasificación (field_clasificaci_n) */
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['id'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['table'] = 'field_data_field_clasificaci_n';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['field'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['vocabulary'] = 'noticias';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Links Apropiación Social TIC';
  $export['clone_of_clone_of_links_destacados_principal'] = $view;

  $view = new view();
  $view->name = 'clone_of_links_destacados_principal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Links Destacados Ciudad Inteligente';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links Destacados Ciudad Inteligente';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['column_classes'] = 'pure-u-24-24 views-column';
  $handler->display->display_options['style_options']['row_classes'] = 'pure-g views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_featured_link_imagen']['id'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['table'] = 'field_data_field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['field'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_link_imagen']['settings'] = array(
    'image_style' => 'imagen_enlace_destacado',
    'image_link' => '',
  );
  /* Field: Content: Referencia */
  $handler->display->display_options['fields']['field_featured_referencia']['id'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['table'] = 'field_data_field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['field'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['label'] = '';
  $handler->display->display_options['fields']['field_featured_referencia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['text'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['path'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_referencia']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_featured_referencia']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_featured_referencia]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enlace_destacado' => 'enlace_destacado',
  );
  /* Filter criterion: Content: Clasificación (field_clasificaci_n) */
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['id'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['table'] = 'field_data_field_clasificaci_n';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['field'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['vocabulary'] = 'noticias';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Links Destacados Ciudad Inteligente';
  $export['clone_of_links_destacados_principal'] = $view;

  $view = new view();
  $view->name = 'links_destacados_principal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Links destacados principal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links destacados principal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'pure-u-6-24 views-column';
  $handler->display->display_options['style_options']['row_classes'] = 'pure-g views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_featured_link_imagen']['id'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['table'] = 'field_data_field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['field'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_link_imagen']['settings'] = array(
    'image_style' => 'imagen_enlace_destacado',
    'image_link' => '',
  );
  /* Field: Content: Referencia */
  $handler->display->display_options['fields']['field_featured_referencia']['id'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['table'] = 'field_data_field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['field'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['label'] = '';
  $handler->display->display_options['fields']['field_featured_referencia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['text'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['path'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_referencia']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_featured_referencia']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_featured_referencia]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enlace_destacado' => 'enlace_destacado',
  );
  /* Filter criterion: Content: Clasificación (field_clasificaci_n) */
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['id'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['table'] = 'field_data_field_clasificaci_n';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['field'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['vocabulary'] = 'noticias';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Enlaces destacados principal';
  $export['links_destacados_principal'] = $view;

  $view = new view();
  $view->name = 'links_destacados_software_libre';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Links destacados software libre';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links destacados principal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['column_classes'] = 'pure-u-24-24 views-column';
  $handler->display->display_options['style_options']['row_classes'] = 'pure-g views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_featured_link_imagen']['id'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['table'] = 'field_data_field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['field'] = 'field_featured_link_imagen';
  $handler->display->display_options['fields']['field_featured_link_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_link_imagen']['settings'] = array(
    'image_style' => 'imagen_enlace_destacado',
    'image_link' => '',
  );
  /* Field: Content: Referencia */
  $handler->display->display_options['fields']['field_featured_referencia']['id'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['table'] = 'field_data_field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['field'] = 'field_featured_referencia';
  $handler->display->display_options['fields']['field_featured_referencia']['label'] = '';
  $handler->display->display_options['fields']['field_featured_referencia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['text'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['alter']['path'] = '[field_featured_referencia-target_id] ';
  $handler->display->display_options['fields']['field_featured_referencia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_referencia']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_featured_referencia']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_featured_referencia]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enlace_destacado' => 'enlace_destacado',
  );
  /* Filter criterion: Content: Clasificación (field_clasificaci_n) */
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['id'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['table'] = 'field_data_field_clasificaci_n';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['field'] = 'field_clasificaci_n_tid';
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_clasificaci_n_tid']['vocabulary'] = 'noticias';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Enlaces destacados software libre';
  $export['links_destacados_software_libre'] = $view;

  return $export;
}
