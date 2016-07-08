<?php

/**
 * @file
 * Islandora Default Thumbs Administration page.
 */

/**
 * Defines the Admin settings form.
 *
 * @param array $form
 *   The Drupal form definition.
 * @param array $form_state
 *   The Drupal form state.
 *
 * @return array
 *   The Drupal form definition.
 */
function islandora_default_thumbs_admin(array $form, array &$form_state) {
//   module_load_include('inc', 'islandora', 'includes/utilities');
//   module_load_include('inc', 'islandora_default_thumbs', 'includes/utilities');
//   module_load_include('inc', 'islandora_basic_collection', 'includes/utilities');

//   $content_models = islandora_get_content_models();
//   $current_config = islandora_default_thumbs_configuration();

//   $rows = array();
//   foreach ($content_models as $pid => $content_model) {
//     $default = str_replace(":", "__", $content_model['pid']);

//     $thumb_override_value = isset($current_config['thumb_replacements'][$content_model['pid']]['thumb_override'][$default]) ?
//       $current_config['thumb_replacements'][$content_model['pid']]['thumb_override'][$default] : 0;
//     $thumb_selected = isset($current_config['thumb_replacements'][$content_model['pid']]['selected']) ?
//       $current_config['thumb_replacements'][$content_model['pid']]['selected'] : 0;

//     $thumb_override = array();
//     $thumb_override[$default] = array(
//       '#type'     => 'managed_file',
//       '#required' => FALSE,
//       '#upload_location' => file_default_scheme() . '://islandora_default_thumbs/replace_icons/',
//       '#default_value' => $thumb_override_value,
//       '#upload_validators' => array(
//         'file_validate_extensions' => array('gif png jpg jpeg'),
//       ),
//     );
//     $rows[$pid] = array(
//       'selected' => array(
//         '#type' => 'checkbox',
//         '#default_value' => $thumb_selected,
//       ),
//       'title' => array(
//         '#markup' => l(t('@label (@pid)', array('@label' => $content_model['label'], '@pid' => $pid)), "islandora/object/{$pid}"),
//       ),
//       'thumb_override' => $thumb_override,
//     );
//   }

//   $source_rows = array();
//   foreach ($current_config['compare_thumbs'] as $fid => $md5) {
//     if ($fid != "") {
//       $file = file_load($fid);
//       $image_url = file_create_url($file->uri);

//       $source_rows[$fid] = array(
//         'selected' => array(
//           '#type' => 'checkbox',
//           '#title' => 'Remove',
//           '#default_value' => 0,
//         ),
//         'title' => array(
//           '#markup' => t('@label', array('@label' => $file->filename)),
//         ),
//         'thumb_source' => array(
//           "#markup" => theme('image', array('path' => $image_url, 'alt' => $file->filename)),
//         ),
//       );
//     }
//   }

//   $form['islandora_default_thumbs_compare_image_fieldset'] = array(
//     '#type' => 'fieldset',
//     '#title' => t('Compare image configuration'),
//     '#collapsible' => TRUE,
//     '#collapsed' => FALSE,
//   );
//~~
//   $form = array(
//     'islandora_default_thumbs_default_tn_datastream' => array(
//       '#type' => 'textfield',
//       '#title' => t('Default TN Datastream DSID'),
//       '#default_value' => $current_config['default_tn_dsid'],
//       '#description' => t('Configure the Default datastream DSID to use as a base for comparision.'),
//       '#size' => 60,
//       '#maxlength' => 128,
//       '#required' => TRUE,
//     ),
//     'islandora_default_thumbs_force_thumb_config' => array(
//       '#type' => 'checkbox',
//       '#title' => t('Force replacment of all configured thumbnails'),
//       '#description' => t('Enforce the following to override all thumbnails for each configured content model, regardless of its TN Derivative status'),
//       '#default_value' => $current_config['force'],
//     ),


//     'table' => array(
//       '#tree' => TRUE,
//       '#header' => array(
//         'class' => array('class' => 'select-all'),
//         'pid' => array('data' => t('Content Model'), 'class' => "content_model_pid"),
//         'prompt' => array('data' => t('Thumbnail Replacement'), 'class' => "content_model_replacement"),
//       ),
//       '#theme' => 'islandora_default_thumbs_management_table',
//       'rows' => $rows,
//     ),


//     'islandora_default_thumbs_compare_image_fieldset' => array(
//       '#type' => 'fieldset',
//       '#title' => t('Compare image configuration'),
//       '#description' => t("Add images here to use as the base of comparison to an Islandora objects thumbnail datastream. If an object is found to use any of the following images as its thumbnail, the content models configured image replacment above will be used in its place."),
//       '#collapsible' => TRUE,
//       '#collapsed' => FALSE,
//       'configured_compare_images' => array(
//         '#tree' => TRUE,
//         '#header' => array(
//           'selected' => array('class' => 'select-all'),
//           'title' => array('data' => t('File Name'), 'class' => "content_model_pid"),
//           'thumb_source' => array('data' => t('Thumbnail Source'), 'class' => "content_model_replacement"),
//         ),
//         '#theme' => 'islandora_default_thumbs_management_table',
//         'rows' => $source_rows,
//       ),
//       'islandora_default_thumbs_plupload' => array(
//         '#type' => 'plupload',
//         '#weight' => 5,
//         '#title' => 'Add Source Thumbnail images',
//         '#description' => t('Maximum file size allowed: 50MB.'),
//         '#upload_validators' => array(
//           'file_validate_extensions' => array('gif png jpg jpeg'),
//         ),
//         '#plupload_settings' => array(
//           'runtimes' => 'html5,flash',
//           'chunk_size' => '50mb',
//           'unique_names' => TRUE,
//           'flash_swf_url' => file_create_url(_plupload_library_path() . '/js/plupload.flash.swf'),
//         ),
//       ),
//     ),
//     'islandora_default_thumbs_missing_thumbnail' => array(
//       '#type'     => 'managed_file',
//       '#title' => t("Missing TN Datastream replacement"),
//       '#description' => t("Default thumbnail for objects missing the TN datastream. NOTE: This will be ignored if a default thumbnail is specified already for said objects CModel above."),
//       '#required' => FALSE,
//       '#upload_location' => file_default_scheme() . '://islandora_default_thumbs/replace_icons/',
//       '#default_value' => $current_config['missing_obj_thumb'],
//       '#upload_validators' => array(
//         'file_validate_extensions' => array('gif png jpg jpeg'),
//       ),
//     ),
//     'submit' => array(
//       '#type' => 'submit',
//       '#value' => t('Update Thumbnail Configuration'),
//     ),
//   );

  module_load_include('inc', 'islandora', 'includes/utilities');
  module_load_include('inc', 'islandora_default_thumbs', 'includes/utilities');
  module_load_include('inc', 'islandora_basic_collection', 'includes/utilities');

  $content_models = islandora_get_content_models();
  //$current_config = islandora_default_thumbs_configuration();

  foreach ($content_models as $pid => $content_model) {
    $default = str_replace(":", "__", $content_model['pid']);

    $current_config = islandora_default_thumbs_get_configuration_for_cmodel($content_model['pid']);

//     $thumb_override_value = isset($current_config['thumb_replacements'][$content_model['pid']]['thumb_override'][$default]) ?
//       $current_config['thumb_replacements'][$content_model['pid']]['thumb_override'][$default] : 0;
//     $thumb_selected = isset($current_config['thumb_replacements'][$content_model['pid']]['selected']) ?
//       $current_config['thumb_replacements'][$content_model['pid']]['selected'] : 0;

    $thumb_override = array();

    $form[$default] = array(
      '#type' => 'fieldset',
      '#title' => t($content_model['label']),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $source_rows = array();
   // dsm($current_config, "reallyc");
    foreach ($current_config['compare_thumbs'] as $key => $config) {
      $fid = $config['fid'];
      if ($fid != "") {
        $file = file_load($fid);
        $image_url = file_create_url($file->uri);

        $source_rows[$fid] = array(
          'selected' => array(
            '#type' => 'checkbox',
            '#title' => 'Remove',
            '#default_value' => 0,
          ),
          'title' => array(
            '#markup' => t('@label', array('@label' => $file->filename)),
          ),
          'thumb_source' => array(
            "#markup" => theme('image', array('path' => $image_url, 'alt' => $file->filename)),
          ),
        );
      }
    }

    $form[$default][$default . "_compare_image"] = array(
      '#type' => 'container',
      '#title' => t('Compare image configuration'),
      '#description' => t("Add images here to use as the base of comparison to an Islandora objects thumbnail datastream. If an object is found to use any of the following images as its thumbnail, the content models configured image replacment above will be used in its place."),
      $default .'default_tn' => array(
        '#type' => 'textfield',
        '#title' => t('Default TN Datastream DSID'),
        '#default_value' => $current_config['default_tn'],
        '#description' => t('Configure the Default datastream DSID to use as a base for comparision.'),
        '#size' => 60,
        '#maxlength' => 128,
        '#required' => TRUE,
      ),
      $default ."thumb_override" => array(
        '#type'     => 'managed_file',
        '#title' => t("Thumbnail Override Image"),
        '#description' => t("Thumbnail to use in place of the current thumbnail, should a match be found."),
        '#required' => FALSE,
        '#upload_location' => file_default_scheme() . '://islandora_default_thumbs/replace_icons/',
        '#default_value' => $current_config['thumb_replacement'],
        '#upload_validators' => array(
          'file_validate_extensions' => array('gif png jpg jpeg'),
        ),
      ),
      $default .'missing_thumb' => array(
        '#type'     => 'managed_file',
        '#title' => t("Missing TN Datastream replacement"),
        '#description' => t("Default thumbnail for objects missing the TN datastream. If not set, the 'Thumbnail Override Image' config will be used, if set."),
        '#required' => FALSE,
        '#upload_location' => file_default_scheme() . '://islandora_default_thumbs/replace_icons/',
        '#default_value' => $current_config['missing_thumb'],
        '#upload_validators' => array(
          'file_validate_extensions' => array('gif png jpg jpeg'),
        ),
      ),
      $default .'configured_compare_images' => array(
        '#tree' => TRUE,
        '#header' => array(
          'selected' => array('class' => 'select-all'),
          'title' => array('data' => t('File Name'), 'class' => "content_model_pid"),
          'thumb_source' => array('data' => t('Thumbnail Source'), 'class' => "content_model_replacement"),
        ),
        '#theme' => 'islandora_default_thumbs_management_table',
        'rows' => $source_rows,
      ),
      $default .'compare_thumb' => array(
        '#type' => 'plupload',
        '#title' => 'Add Source Thumbnail images',
        '#description' => t('Maximum file size allowed: 50MB.'),
        '#upload_validators' => array(
          'file_validate_extensions' => array('gif png jpg jpeg'),
        ),
        '#plupload_settings' => array(
          'runtimes' => 'html5,flash',
          'chunk_size' => '50mb',
          'unique_names' => TRUE,
          'flash_swf_url' => file_create_url(_plupload_library_path() . '/js/plupload.flash.swf'),
        ),
      ),
      $default .'force' => array(
        '#type' => 'checkbox',
        '#title' => t('Force replacment for all objects of this CModel'),
        '#description' => t('Enforce this configuration, regardless of its TN Derivative status'),
        '#default_value' => $current_config['force'],
      ),
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update Thumbnail Configuration'),
  );

  dsm($form, "form");
  return $form;
}

/**
 * Submit handler for the default thumbs admin form.
 *
 * @param array $form
 *   The Drupal form definition.
 * @param array $form_state
 *   The Drupal form state.
 */
function islandora_default_thumbs_admin_submit(array $form, array &$form_state) {
  //dsm($form, "form in submit");
   dsm($form_state, "form_state");
  module_load_include('inc', 'islandora', 'includes/utilities');
  module_load_include('inc', 'islandora_default_thumbs', 'includes/utilities');

  $content_models = islandora_get_content_models();

  $new_config = array();
  foreach ($content_models as $pid => $content_model) {
    $current_config = islandora_default_thumbs_get_configuration_for_cmodel($content_model['pid']);
    $default = str_replace(":", "__", $content_model['pid']);
    $new_config[$content_model['pid']] = array(
      'thumb_replacement' => $form_state['values'][$default . 'thumb_override'],
      'missing_thumb' => $form_state['values'][$default . 'missing_thumb'],
      'default_tn' => $form_state['values'][$default . 'default_tn'],
      'force' => $form_state['values'][$default . 'force'],
      'compare_thumbs' => array(),
    );
    // Save pluploaded images.
    if (count($form_state['values'][$default . 'compare_thumb']) > 0) {
      $scheme = file_default_scheme() . '://islandora_default_thumbs/collection_images/default_icons/';

      // Create the folder if it does not exist.
      file_prepare_directory($scheme, FILE_CREATE_DIRECTORY);
      foreach ($form_state['values'][$default . 'compare_thumb'] as $ckey => $uploaded_file) {
        if ($uploaded_file['status'] == 'done') {
          $source = $uploaded_file['tmppath'];
          $destination = file_stream_wrapper_uri_normalize($scheme . $uploaded_file['name']);
          $destination = file_unmanaged_move($source, $destination, FILE_EXISTS_RENAME);

          $file = plupload_file_uri_to_object($destination);
          $file->status = FILE_STATUS_PERMANENT;
          file_save($file);

          // Save the File id as array key, and the files md5 hash for
          // later comparison.
          $new_config[$content_model['pid']]['compare_thumbs'][$ckey]['md5'] =
            md5(file_get_contents(file_create_url($file->uri)));
          $new_config[$content_model['pid']]['compare_thumbs'][$ckey]['fid'] = $file->fid;
        }
      }
    }

    // Check the missing thumbnail image
    if ($new_config[$content_model['pid']]['missing_thumb'] > 0) {
      if ($new_config[$content_model['pid']]['missing_thumb'] != $current_config['missing_thumb']) {
        islandora_default_thumbs_file_delete($current_config['missing_thumb']);
      }
      islandora_default_thumbs_file_save($new_config[$content_model['pid']]['missing_thumb']);
    }
    else if ($current_config['missing_thumb'] > 0){
      islandora_default_thumbs_file_delete($current_config['missing_thumb']);
    }

      // Check the thumbnail replacement
    if ($new_config[$content_model['pid']]['thumb_replacement'] > 0) {
      if ($new_config[$content_model['pid']]['thumb_replacement'] != $current_config['thumb_replacement']) {
        islandora_default_thumbs_file_delete($current_config['thumb_replacement']);
      }
      islandora_default_thumbs_file_save($new_config[$content_model['pid']]['thumb_replacement']);
    }
    else if ($current_config['thumb_replacement'] > 0){
      islandora_default_thumbs_file_delete($current_config['thumb_replacement']);
    }

    // Save the new configuration.
    variable_set($default . 'thumb_replacement', $new_config[$content_model['pid']]['thumb_replacement']);
    variable_set($default . 'missing_thumb', $new_config[$content_model['pid']]['missing_thumb']);
    variable_set($default . 'default_tn', $new_config[$content_model['pid']]['default_tn']);
    variable_set($default . 'force', $new_config[$content_model['pid']]['force']);
    variable_set($default . 'compare_thumbs', $new_config[$content_model['pid']]['compare_thumbs']);
//     foreach ($new_config as $cmodel => $config) {
//       variable_set($new_config[$cmodel][]);
//     }
  }
  dsm($new_config, "new config");
//   foreach ($form_state['values'] as $cmodel => &$value) {
//     $default = str_replace(":", "__", $cmodel);
//     if ($value['thumb_override'][$default] != 0) {
//       $file = file_load($value['thumb_override'][$default]);
//       islandora_default_thumbs_file_save(array($file->fid));
//       $value['thumb_override']['hash'] = md5(file_get_contents(file_create_url($file->uri)));
//     }
//   }
//   // Save thumb override hash.
//   foreach ($form_state['values']['table']['rows'] as $cmodel => &$value) {
//     $default = str_replace(":", "__", $cmodel);
//     if ($value['thumb_override'][$default] != 0) {
//       $file = file_load($value['thumb_override'][$default]);
//       islandora_default_thumbs_file_save(array($file->fid));
//       $value['thumb_override']['hash'] = md5(file_get_contents(file_create_url($file->uri)));
//     }
//   }

//   // Save pluploaded images.
//   if (count($form_state['values']['islandora_default_thumbs_plupload']) > 0) {
//     $scheme = file_default_scheme() . '://islandora_default_thumbs/collection_images/default_icons/';
//     $default_thumbs = variable_get('islandora_default_thumbs_file_fids', array());

//     // Create the folder if it does not exist.
//     file_prepare_directory($scheme, FILE_CREATE_DIRECTORY);
//     foreach ($form_state['values']['islandora_default_thumbs_plupload'] as $uploaded_file) {
//       if ($uploaded_file['status'] == 'done') {
//         $source = $uploaded_file['tmppath'];
//         $destination = file_stream_wrapper_uri_normalize($scheme . $uploaded_file['name']);
//         $destination = file_unmanaged_move($source, $destination, FILE_EXISTS_RENAME);

//         $file = plupload_file_uri_to_object($destination);
//         $file->status = FILE_STATUS_PERMANENT;
//         file_save($file);

//         // Save the File id as array key, and the files md5 hash for
//         // later comparison.
//         $default_thumbs[$file->fid] = md5(file_get_contents(file_create_url($file->uri)));
//       }
//     }
//     variable_set('islandora_default_thumbs_file_fids', $default_thumbs);
//   }

//   // Remove compare thumbs if configuration indicates.
//   islandora_default_thumbs_manage_compare_thumbs($form_state);

//   // Save default CModel thumb replacements.
//   variable_set(
//     'islandora_default_thumbs_replacements',
//     $form_state['values']['table']['rows']
//   );

//   // Save force thumbnail settings.
//   variable_set(
//     'islandora_default_thumbs_force_thumb_config',
//     $form_state['values']['islandora_default_thumbs_force_thumb_config']
//   );

//   // Save Default thumbnail datastream.
//   variable_set(
//     'islandora_default_thumbs_default_tn_datastream',
//     $form_state['values']['islandora_default_thumbs_default_tn_datastream']
//   );

//   // Save the default missing thumbnail file.
//   if ($form_state['values']['islandora_default_thumbs_missing_thumbnail'] != 0) {
//     islandora_default_thumbs_file_save(array($form['islandora_default_thumbs_missing_thumbnail']['#file']->fid));
//     // Save Default missing thumbnail file id.
//     variable_set(
//       'islandora_default_thumbs_missing_thumbnail',
//       $form_state['values']['islandora_default_thumbs_missing_thumbnail']
//     );
//   }
//   else {
//     // Check for an existing entry since the default thumb appears to have been
//     // removed. If so, delete it.
//     $missing_fid = variable_get('islandora_default_thumbs_missing_thumbnail');
//     if ($missing_fid) {
//       $file = file_load($missing_fid);
//       file_delete($file, TRUE);

//       // Reset our missing thumbnail config back to NULL.
//       variable_set(
//         'islandora_default_thumbs_missing_thumbnail',
//         NULL
//       );
//     }
//   }
}

/**
 * Ensure uploaded files are permanently saved.
 *
 * @param array() $replacement_file_fids
 *   An array of file id's.
 */
function islandora_default_thumbs_file_delete($fid) {
  if ($fid != 0) {
    $file = file_load($fid);
    file_delete($file, TRUE);
  }
}

/**
 * Ensure uploaded files are permanently saved.
 *
 * @param array() $replacement_file_fids
 *   An array of file id's.
 */
function islandora_default_thumbs_file_save($fid) {
  global $user;
  if ($fid != 0) {
    $file = file_load($fid);
    $file->status = FILE_STATUS_PERMANENT;
    $file = file_save($file);
    file_usage_add($file, 'file', 'islandora', $user->uid);
  }
}

/**
 * Managed compare thumbs, delete if required.
 *
 * @param array $form_state
 *   Form state array.
 */
function islandora_default_thumbs_manage_compare_thumbs(&$form_state) {
  $default_thumbs = variable_get('islandora_default_thumbs_file_fids', array());
  // Remove selected images if they are not checked.
  if (isset($form_state['values']['configured_compare_images'])) {
    foreach ($form_state['values']['configured_compare_images']['rows'] as $file_id => $in_value) {
      // Delete this image.
      if ($in_value['selected'] == 1) {
        $file = file_load($file_id);
        file_delete($file, TRUE);
        // Remove from or file array.
        unset($default_thumbs[$file_id]);
      }
    }
  }

  variable_set('islandora_default_thumbs_file_fids', $default_thumbs);
}
