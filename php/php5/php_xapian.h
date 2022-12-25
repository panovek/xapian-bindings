/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.13
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_XAPIAN_H
#define PHP_XAPIAN_H

extern zend_module_entry xapian_module_entry;
#define phpext_xapian_ptr &xapian_module_entry

#ifdef PHP_WIN32
# define PHP_XAPIAN_API __declspec(dllexport)
#else
# define PHP_XAPIAN_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(xapian);
PHP_MSHUTDOWN_FUNCTION(xapian);
PHP_RINIT_FUNCTION(xapian);
PHP_RSHUTDOWN_FUNCTION(xapian);
PHP_MINFO_FUNCTION(xapian);

ZEND_NAMED_FUNCTION(_wrap_version_string);
ZEND_NAMED_FUNCTION(_wrap_major_version);
ZEND_NAMED_FUNCTION(_wrap_minor_version);
ZEND_NAMED_FUNCTION(_wrap_revision);
ZEND_NAMED_FUNCTION(_wrap_new_PositionIterator);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_skip_to);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_get_description);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_key);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_current);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_valid);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_rewind);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_get_termpos);
ZEND_NAMED_FUNCTION(_wrap_PositionIterator_next);
ZEND_NAMED_FUNCTION(_wrap_new_PostingIterator);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_get_wdf);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_get_doclength);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_get_unique_terms);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_positionlist_begin);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_positionlist_end);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_skip_to);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_get_description);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_key);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_current);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_valid);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_rewind);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_get_docid);
ZEND_NAMED_FUNCTION(_wrap_PostingIterator_next);
ZEND_NAMED_FUNCTION(_wrap_new_TermIterator);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_get_wdf);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_get_termfreq);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_positionlist_count);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_positionlist_begin);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_positionlist_end);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_skip_to);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_get_description);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_key);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_current);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_valid);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_rewind);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_get_term);
ZEND_NAMED_FUNCTION(_wrap_TermIterator_next);
ZEND_NAMED_FUNCTION(_wrap_new_ValueIterator);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_get_docid);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_get_valueno);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_skip_to);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_check);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_get_description);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_key);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_current);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_valid);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_rewind);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_get_value);
ZEND_NAMED_FUNCTION(_wrap_ValueIterator_next);
ZEND_NAMED_FUNCTION(_wrap_new_Document);
ZEND_NAMED_FUNCTION(_wrap_Document_get_value);
ZEND_NAMED_FUNCTION(_wrap_Document_add_value);
ZEND_NAMED_FUNCTION(_wrap_Document_remove_value);
ZEND_NAMED_FUNCTION(_wrap_Document_clear_values);
ZEND_NAMED_FUNCTION(_wrap_Document_get_data);
ZEND_NAMED_FUNCTION(_wrap_Document_set_data);
ZEND_NAMED_FUNCTION(_wrap_Document_add_posting);
ZEND_NAMED_FUNCTION(_wrap_Document_add_term);
ZEND_NAMED_FUNCTION(_wrap_Document_add_boolean_term);
ZEND_NAMED_FUNCTION(_wrap_Document_remove_posting);
ZEND_NAMED_FUNCTION(_wrap_Document_remove_postings);
ZEND_NAMED_FUNCTION(_wrap_Document_remove_term);
ZEND_NAMED_FUNCTION(_wrap_Document_clear_terms);
ZEND_NAMED_FUNCTION(_wrap_Document_termlist_count);
ZEND_NAMED_FUNCTION(_wrap_Document_termlist_begin);
ZEND_NAMED_FUNCTION(_wrap_Document_termlist_end);
ZEND_NAMED_FUNCTION(_wrap_Document_values_count);
ZEND_NAMED_FUNCTION(_wrap_Document_values_begin);
ZEND_NAMED_FUNCTION(_wrap_Document_values_end);
ZEND_NAMED_FUNCTION(_wrap_Document_get_docid);
ZEND_NAMED_FUNCTION(_wrap_Document_serialise);
ZEND_NAMED_FUNCTION(_wrap_Document_unserialise);
ZEND_NAMED_FUNCTION(_wrap_Document_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_Registry);
ZEND_NAMED_FUNCTION(_wrap_Registry_register_weighting_scheme);
ZEND_NAMED_FUNCTION(_wrap_Registry_get_weighting_scheme);
ZEND_NAMED_FUNCTION(_wrap_Registry_register_posting_source);
ZEND_NAMED_FUNCTION(_wrap_Registry_get_posting_source);
ZEND_NAMED_FUNCTION(_wrap_Registry_register_match_spy);
ZEND_NAMED_FUNCTION(_wrap_Registry_get_match_spy);
ZEND_NAMED_FUNCTION(_wrap_Registry_register_lat_long_metric);
ZEND_NAMED_FUNCTION(_wrap_Registry_get_lat_long_metric);
ZEND_NAMED_FUNCTION(_wrap_Query_MatchNothing_get);
ZEND_NAMED_FUNCTION(_wrap_Query_MatchAll_get);
ZEND_NAMED_FUNCTION(_wrap_Query_get_terms_begin);
ZEND_NAMED_FUNCTION(_wrap_Query_get_terms_end);
ZEND_NAMED_FUNCTION(_wrap_Query_get_unique_terms_begin);
ZEND_NAMED_FUNCTION(_wrap_Query_get_unique_terms_end);
ZEND_NAMED_FUNCTION(_wrap_Query_get_length);
ZEND_NAMED_FUNCTION(_wrap_Query_is_empty);
ZEND_NAMED_FUNCTION(_wrap_Query_serialise);
ZEND_NAMED_FUNCTION(_wrap_Query_unserialise);
ZEND_NAMED_FUNCTION(_wrap_Query_get_type);
ZEND_NAMED_FUNCTION(_wrap_Query_get_num_subqueries);
ZEND_NAMED_FUNCTION(_wrap_Query_get_subquery);
ZEND_NAMED_FUNCTION(_wrap_Query_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_Query);
ZEND_NAMED_FUNCTION(_wrap_new_StemImplementation);
ZEND_NAMED_FUNCTION(_wrap_StemImplementation_apply);
ZEND_NAMED_FUNCTION(_wrap_StemImplementation_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_Stem);
ZEND_NAMED_FUNCTION(_wrap_Stem_apply);
ZEND_NAMED_FUNCTION(_wrap_Stem_is_none);
ZEND_NAMED_FUNCTION(_wrap_Stem_get_description);
ZEND_NAMED_FUNCTION(_wrap_Stem_get_available_languages);
ZEND_NAMED_FUNCTION(_wrap_new_TermGenerator);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_stemmer);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_stopper);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_document);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_get_document);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_database);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_flags);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_stemming_strategy);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_stopper_strategy);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_max_word_length);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_index_text);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_index_text_without_positions);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_increase_termpos);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_get_termpos);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_set_termpos);
ZEND_NAMED_FUNCTION(_wrap_TermGenerator_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_MSet);
ZEND_NAMED_FUNCTION(_wrap_MSet_convert_to_percent);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_termfreq);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_termweight);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_firstitem);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_matches_lower_bound);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_matches_estimated);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_matches_upper_bound);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_uncollapsed_matches_lower_bound);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_uncollapsed_matches_estimated);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_uncollapsed_matches_upper_bound);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_max_attained);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_max_possible);
ZEND_NAMED_FUNCTION(_wrap_MSet_snippet);
ZEND_NAMED_FUNCTION(_wrap_MSet_fetch);
ZEND_NAMED_FUNCTION(_wrap_MSet_size);
ZEND_NAMED_FUNCTION(_wrap_MSet_is_empty);
ZEND_NAMED_FUNCTION(_wrap_MSet_begin);
ZEND_NAMED_FUNCTION(_wrap_MSet_end);
ZEND_NAMED_FUNCTION(_wrap_MSet_back);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_description);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_docid);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_document);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_hit);
ZEND_NAMED_FUNCTION(_wrap_MSet_get_document_percentage);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_mset_set);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_mset_get);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_off_from_end_set);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_off_from_end_get);
ZEND_NAMED_FUNCTION(_wrap_new_MSetIterator);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_rank);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_document);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_weight);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_collapse_key);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_collapse_count);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_sort_key);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_percent);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_description);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_key);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_current);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_valid);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_rewind);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_get_docid);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_next);
ZEND_NAMED_FUNCTION(_wrap_MSetIterator_prev);
ZEND_NAMED_FUNCTION(_wrap_new_ESet);
ZEND_NAMED_FUNCTION(_wrap_ESet_size);
ZEND_NAMED_FUNCTION(_wrap_ESet_is_empty);
ZEND_NAMED_FUNCTION(_wrap_ESet_get_ebound);
ZEND_NAMED_FUNCTION(_wrap_ESet_begin);
ZEND_NAMED_FUNCTION(_wrap_ESet_end);
ZEND_NAMED_FUNCTION(_wrap_ESet_back);
ZEND_NAMED_FUNCTION(_wrap_ESet_get_description);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_eset_set);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_eset_get);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_off_from_end_set);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_off_from_end_get);
ZEND_NAMED_FUNCTION(_wrap_new_ESetIterator);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_get_weight);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_get_description);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_key);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_current);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_valid);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_rewind);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_get_term);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_next);
ZEND_NAMED_FUNCTION(_wrap_ESetIterator_prev);
ZEND_NAMED_FUNCTION(_wrap_new_RSet);
ZEND_NAMED_FUNCTION(_wrap_RSet_size);
ZEND_NAMED_FUNCTION(_wrap_RSet_is_empty);
ZEND_NAMED_FUNCTION(_wrap_RSet_add_document);
ZEND_NAMED_FUNCTION(_wrap_RSet_remove_document);
ZEND_NAMED_FUNCTION(_wrap_RSet_contains);
ZEND_NAMED_FUNCTION(_wrap_RSet_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_MatchDecider);
ZEND_NAMED_FUNCTION(_wrap_MatchDecider_apply);
ZEND_NAMED_FUNCTION(_wrap_new_Enquire);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_query);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_query);
ZEND_NAMED_FUNCTION(_wrap_Enquire_add_matchspy);
ZEND_NAMED_FUNCTION(_wrap_Enquire_clear_matchspies);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_weighting_scheme);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_expansion_scheme);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_collapse_key);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_docid_order);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_cutoff);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_relevance);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_value);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_key);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_value_then_relevance);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_key_then_relevance);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_relevance_then_value);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_sort_by_relevance_then_key);
ZEND_NAMED_FUNCTION(_wrap_Enquire_set_time_limit);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_mset);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_eset);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_matching_terms_begin);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_matching_terms_end);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_description);
ZEND_NAMED_FUNCTION(_wrap_Enquire_get_matching_terms);
ZEND_NAMED_FUNCTION(_wrap_new_ExpandDecider);
ZEND_NAMED_FUNCTION(_wrap_ExpandDecider_apply);
ZEND_NAMED_FUNCTION(_wrap_ExpandDecider_release);
ZEND_NAMED_FUNCTION(_wrap_new_ExpandDeciderAnd);
ZEND_NAMED_FUNCTION(_wrap_ExpandDeciderAnd_apply);
ZEND_NAMED_FUNCTION(_wrap_new_ExpandDeciderFilterPrefix);
ZEND_NAMED_FUNCTION(_wrap_ExpandDeciderFilterPrefix_apply);
ZEND_NAMED_FUNCTION(_wrap_new_KeyMaker);
ZEND_NAMED_FUNCTION(_wrap_KeyMaker_apply);
ZEND_NAMED_FUNCTION(_wrap_KeyMaker_release);
ZEND_NAMED_FUNCTION(_wrap_new_MultiValueKeyMaker);
ZEND_NAMED_FUNCTION(_wrap_MultiValueKeyMaker_apply);
ZEND_NAMED_FUNCTION(_wrap_MultiValueKeyMaker_add_value);
ZEND_NAMED_FUNCTION(_wrap_new_Stopper);
ZEND_NAMED_FUNCTION(_wrap_Stopper_apply);
ZEND_NAMED_FUNCTION(_wrap_Stopper_get_description);
ZEND_NAMED_FUNCTION(_wrap_Stopper_release);
ZEND_NAMED_FUNCTION(_wrap_SimpleStopper_add);
ZEND_NAMED_FUNCTION(_wrap_SimpleStopper_apply);
ZEND_NAMED_FUNCTION(_wrap_SimpleStopper_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_SimpleStopper);
ZEND_NAMED_FUNCTION(_wrap_new_RangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_RangeProcessor_check_range);
ZEND_NAMED_FUNCTION(_wrap_RangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_RangeProcessor_release);
ZEND_NAMED_FUNCTION(_wrap_new_DateRangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_DateRangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_new_NumberRangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_NumberRangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_new_ValueRangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_ValueRangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_ValueRangeProcessor_release);
ZEND_NAMED_FUNCTION(_wrap_new_StringValueRangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_StringValueRangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_new_DateValueRangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_DateValueRangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_new_NumberValueRangeProcessor);
ZEND_NAMED_FUNCTION(_wrap_NumberValueRangeProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_new_FieldProcessor);
ZEND_NAMED_FUNCTION(_wrap_FieldProcessor_apply);
ZEND_NAMED_FUNCTION(_wrap_FieldProcessor_release);
ZEND_NAMED_FUNCTION(_wrap_new_QueryParser);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_stemmer);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_stemming_strategy);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_stopper);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_default_op);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_get_default_op);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_database);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_max_expansion);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_set_max_wildcard_expansion);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_parse_query);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_add_prefix);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_add_boolean_prefix);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_stoplist_begin);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_stoplist_end);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_unstem_begin);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_unstem_end);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_add_rangeprocessor);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_add_valuerangeprocessor);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_get_corrected_query_string);
ZEND_NAMED_FUNCTION(_wrap_QueryParser_get_description);
ZEND_NAMED_FUNCTION(_wrap_sortable_serialise);
ZEND_NAMED_FUNCTION(_wrap_sortable_unserialise);
ZEND_NAMED_FUNCTION(_wrap_new_ValueSetMatchDecider);
ZEND_NAMED_FUNCTION(_wrap_ValueSetMatchDecider_add_value);
ZEND_NAMED_FUNCTION(_wrap_ValueSetMatchDecider_remove_value);
ZEND_NAMED_FUNCTION(_wrap_ValueSetMatchDecider_apply);
ZEND_NAMED_FUNCTION(_wrap_Weight_name);
ZEND_NAMED_FUNCTION(_wrap_Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_BoolWeight);
ZEND_NAMED_FUNCTION(_wrap_BoolWeight_name);
ZEND_NAMED_FUNCTION(_wrap_BoolWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_BoolWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_BoolWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_BoolWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_TfIdfWeight);
ZEND_NAMED_FUNCTION(_wrap_TfIdfWeight_name);
ZEND_NAMED_FUNCTION(_wrap_TfIdfWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_TfIdfWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_TfIdfWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_TfIdfWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_BM25Weight);
ZEND_NAMED_FUNCTION(_wrap_BM25Weight_name);
ZEND_NAMED_FUNCTION(_wrap_BM25Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_BM25Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_BM25Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_BM25Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_BM25PlusWeight);
ZEND_NAMED_FUNCTION(_wrap_BM25PlusWeight_name);
ZEND_NAMED_FUNCTION(_wrap_BM25PlusWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_BM25PlusWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_BM25PlusWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_BM25PlusWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_TradWeight);
ZEND_NAMED_FUNCTION(_wrap_TradWeight_name);
ZEND_NAMED_FUNCTION(_wrap_TradWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_TradWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_TradWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_TradWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_InL2Weight);
ZEND_NAMED_FUNCTION(_wrap_InL2Weight_name);
ZEND_NAMED_FUNCTION(_wrap_InL2Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_InL2Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_InL2Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_InL2Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_IfB2Weight);
ZEND_NAMED_FUNCTION(_wrap_IfB2Weight_name);
ZEND_NAMED_FUNCTION(_wrap_IfB2Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_IfB2Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_IfB2Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_IfB2Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_IneB2Weight);
ZEND_NAMED_FUNCTION(_wrap_IneB2Weight_name);
ZEND_NAMED_FUNCTION(_wrap_IneB2Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_IneB2Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_IneB2Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_IneB2Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_BB2Weight);
ZEND_NAMED_FUNCTION(_wrap_BB2Weight_name);
ZEND_NAMED_FUNCTION(_wrap_BB2Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_BB2Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_BB2Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_BB2Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_DLHWeight);
ZEND_NAMED_FUNCTION(_wrap_DLHWeight_name);
ZEND_NAMED_FUNCTION(_wrap_DLHWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_DLHWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_DLHWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_DLHWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_PL2Weight);
ZEND_NAMED_FUNCTION(_wrap_PL2Weight_name);
ZEND_NAMED_FUNCTION(_wrap_PL2Weight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_PL2Weight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_PL2Weight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_PL2Weight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_PL2PlusWeight);
ZEND_NAMED_FUNCTION(_wrap_PL2PlusWeight_name);
ZEND_NAMED_FUNCTION(_wrap_PL2PlusWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_PL2PlusWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_PL2PlusWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_PL2PlusWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_DPHWeight);
ZEND_NAMED_FUNCTION(_wrap_DPHWeight_name);
ZEND_NAMED_FUNCTION(_wrap_DPHWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_DPHWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_DPHWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_DPHWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_LMWeight);
ZEND_NAMED_FUNCTION(_wrap_LMWeight_name);
ZEND_NAMED_FUNCTION(_wrap_LMWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_LMWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_LMWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_LMWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_CoordWeight_init);
ZEND_NAMED_FUNCTION(_wrap_new_CoordWeight);
ZEND_NAMED_FUNCTION(_wrap_CoordWeight_name);
ZEND_NAMED_FUNCTION(_wrap_CoordWeight_get_sumpart);
ZEND_NAMED_FUNCTION(_wrap_CoordWeight_get_maxpart);
ZEND_NAMED_FUNCTION(_wrap_CoordWeight_get_sumextra);
ZEND_NAMED_FUNCTION(_wrap_CoordWeight_get_maxextra);
ZEND_NAMED_FUNCTION(_wrap_new_Compactor);
ZEND_NAMED_FUNCTION(_wrap_Compactor_set_block_size);
ZEND_NAMED_FUNCTION(_wrap_Compactor_set_renumber);
ZEND_NAMED_FUNCTION(_wrap_Compactor_set_multipass);
ZEND_NAMED_FUNCTION(_wrap_Compactor_set_compaction_level);
ZEND_NAMED_FUNCTION(_wrap_Compactor_set_destdir);
ZEND_NAMED_FUNCTION(_wrap_Compactor_add_source);
ZEND_NAMED_FUNCTION(_wrap_Compactor_compact);
ZEND_NAMED_FUNCTION(_wrap_Compactor_set_status);
ZEND_NAMED_FUNCTION(_wrap_Compactor_resolve_duplicate_metadata);
ZEND_NAMED_FUNCTION(_wrap_new_PostingSource);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_termfreq_min);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_termfreq_est);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_termfreq_max);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_set_maxweight);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_maxweight);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_weight);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_docid);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_next);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_skip_to);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_check);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_at_end);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_name);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_get_description);
ZEND_NAMED_FUNCTION(_wrap_PostingSource_release);
ZEND_NAMED_FUNCTION(_wrap_new_ValuePostingSource);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_termfreq_min);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_termfreq_est);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_termfreq_max);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_next);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_skip_to);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_check);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_at_end);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_docid);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_database);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_slot);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_value);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_done);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_get_started);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_set_termfreq_min);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_set_termfreq_est);
ZEND_NAMED_FUNCTION(_wrap_ValuePostingSource_set_termfreq_max);
ZEND_NAMED_FUNCTION(_wrap_new_ValueWeightPostingSource);
ZEND_NAMED_FUNCTION(_wrap_ValueWeightPostingSource_get_weight);
ZEND_NAMED_FUNCTION(_wrap_ValueWeightPostingSource_name);
ZEND_NAMED_FUNCTION(_wrap_ValueWeightPostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_ValueWeightPostingSource_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_DecreasingValueWeightPostingSource);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_get_weight);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_name);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_next);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_skip_to);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_check);
ZEND_NAMED_FUNCTION(_wrap_DecreasingValueWeightPostingSource_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_ValueMapPostingSource);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_add_mapping);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_clear_mappings);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_set_default_weight);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_get_weight);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_name);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_ValueMapPostingSource_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_FixedWeightPostingSource);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_get_termfreq_min);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_get_termfreq_est);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_get_termfreq_max);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_get_weight);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_next);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_skip_to);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_check);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_at_end);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_get_docid);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_name);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_FixedWeightPostingSource_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_MatchSpy);
ZEND_NAMED_FUNCTION(_wrap_MatchSpy_apply);
ZEND_NAMED_FUNCTION(_wrap_MatchSpy_name);
ZEND_NAMED_FUNCTION(_wrap_MatchSpy_merge_results);
ZEND_NAMED_FUNCTION(_wrap_MatchSpy_get_description);
ZEND_NAMED_FUNCTION(_wrap_MatchSpy_release);
ZEND_NAMED_FUNCTION(_wrap_new_ValueCountMatchSpy);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_get_total);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_values_begin);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_values_end);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_top_values_begin);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_top_values_end);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_apply);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_name);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_merge_results);
ZEND_NAMED_FUNCTION(_wrap_ValueCountMatchSpy_get_description);
ZEND_NAMED_FUNCTION(_wrap_miles_to_metres);
ZEND_NAMED_FUNCTION(_wrap_metres_to_miles);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_latitude_set);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_latitude_get);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_longitude_set);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_longitude_get);
ZEND_NAMED_FUNCTION(_wrap_new_LatLongCoord);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_unserialise);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_serialise);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoord_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_LatLongCoordsIterator);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoordsIterator_equals);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoordsIterator_get_coord);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoordsIterator_next);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_begin);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_end);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_size);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_is_empty);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_append);
ZEND_NAMED_FUNCTION(_wrap_new_LatLongCoords);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_unserialise);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_serialise);
ZEND_NAMED_FUNCTION(_wrap_LatLongCoords_get_description);
ZEND_NAMED_FUNCTION(_wrap_LatLongMetric_pointwise_distance);
ZEND_NAMED_FUNCTION(_wrap_LatLongMetric_apply);
ZEND_NAMED_FUNCTION(_wrap_LatLongMetric_name);
ZEND_NAMED_FUNCTION(_wrap_new_LatLongMetric);
ZEND_NAMED_FUNCTION(_wrap_new_GreatCircleMetric);
ZEND_NAMED_FUNCTION(_wrap_GreatCircleMetric_pointwise_distance);
ZEND_NAMED_FUNCTION(_wrap_GreatCircleMetric_name);
ZEND_NAMED_FUNCTION(_wrap_new_LatLongDistancePostingSource);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_next);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_skip_to);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_check);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_get_weight);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_name);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_init);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistancePostingSource_get_description);
ZEND_NAMED_FUNCTION(_wrap_new_LatLongDistanceKeyMaker);
ZEND_NAMED_FUNCTION(_wrap_LatLongDistanceKeyMaker_apply);
ZEND_NAMED_FUNCTION(_wrap_Database_add_database);
ZEND_NAMED_FUNCTION(_wrap_Database_size);
ZEND_NAMED_FUNCTION(_wrap_new_Database);
ZEND_NAMED_FUNCTION(_wrap_Database_reopen);
ZEND_NAMED_FUNCTION(_wrap_Database_close);
ZEND_NAMED_FUNCTION(_wrap_Database_get_description);
ZEND_NAMED_FUNCTION(_wrap_Database_postlist_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_postlist_end);
ZEND_NAMED_FUNCTION(_wrap_Database_termlist_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_termlist_end);
ZEND_NAMED_FUNCTION(_wrap_Database_has_positions);
ZEND_NAMED_FUNCTION(_wrap_Database_positionlist_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_positionlist_end);
ZEND_NAMED_FUNCTION(_wrap_Database_allterms_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_allterms_end);
ZEND_NAMED_FUNCTION(_wrap_Database_get_doccount);
ZEND_NAMED_FUNCTION(_wrap_Database_get_lastdocid);
ZEND_NAMED_FUNCTION(_wrap_Database_get_avlength);
ZEND_NAMED_FUNCTION(_wrap_Database_get_average_length);
ZEND_NAMED_FUNCTION(_wrap_Database_get_total_length);
ZEND_NAMED_FUNCTION(_wrap_Database_get_termfreq);
ZEND_NAMED_FUNCTION(_wrap_Database_term_exists);
ZEND_NAMED_FUNCTION(_wrap_Database_get_collection_freq);
ZEND_NAMED_FUNCTION(_wrap_Database_get_value_freq);
ZEND_NAMED_FUNCTION(_wrap_Database_get_value_lower_bound);
ZEND_NAMED_FUNCTION(_wrap_Database_get_value_upper_bound);
ZEND_NAMED_FUNCTION(_wrap_Database_get_doclength_lower_bound);
ZEND_NAMED_FUNCTION(_wrap_Database_get_doclength_upper_bound);
ZEND_NAMED_FUNCTION(_wrap_Database_get_wdf_upper_bound);
ZEND_NAMED_FUNCTION(_wrap_Database_valuestream_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_valuestream_end);
ZEND_NAMED_FUNCTION(_wrap_Database_get_doclength);
ZEND_NAMED_FUNCTION(_wrap_Database_get_unique_terms);
ZEND_NAMED_FUNCTION(_wrap_Database_keep_alive);
ZEND_NAMED_FUNCTION(_wrap_Database_get_document);
ZEND_NAMED_FUNCTION(_wrap_Database_get_spelling_suggestion);
ZEND_NAMED_FUNCTION(_wrap_Database_spellings_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_spellings_end);
ZEND_NAMED_FUNCTION(_wrap_Database_synonyms_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_synonyms_end);
ZEND_NAMED_FUNCTION(_wrap_Database_synonym_keys_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_synonym_keys_end);
ZEND_NAMED_FUNCTION(_wrap_Database_get_metadata);
ZEND_NAMED_FUNCTION(_wrap_Database_metadata_keys_begin);
ZEND_NAMED_FUNCTION(_wrap_Database_metadata_keys_end);
ZEND_NAMED_FUNCTION(_wrap_Database_get_uuid);
ZEND_NAMED_FUNCTION(_wrap_Database_locked);
ZEND_NAMED_FUNCTION(_wrap_Database_get_revision);
ZEND_NAMED_FUNCTION(_wrap_Database_check);
ZEND_NAMED_FUNCTION(_wrap_Database_compact);
ZEND_NAMED_FUNCTION(_wrap_new_WritableDatabase);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_add_database);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_commit);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_flush);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_begin_transaction);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_commit_transaction);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_cancel_transaction);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_add_document);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_delete_document);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_replace_document);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_add_spelling);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_remove_spelling);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_add_synonym);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_remove_synonym);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_clear_synonyms);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_set_metadata);
ZEND_NAMED_FUNCTION(_wrap_WritableDatabase_get_description);
ZEND_NAMED_FUNCTION(_wrap_auto_open_stub);
ZEND_NAMED_FUNCTION(_wrap_inmemory_open);
ZEND_NAMED_FUNCTION(_wrap_chert_open);
ZEND_NAMED_FUNCTION(_wrap_remote_open);
ZEND_NAMED_FUNCTION(_wrap_remote_open_writable);
ZEND_NAMED_FUNCTION(_wrap_BAD_VALUENO_get);
#endif /* PHP_XAPIAN_H */
